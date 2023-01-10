#include "Mtmchkin.h"
#include "HelperFunctions.h"
const int MIN_PLAYERS_SIZE = 2;
const int MAX_PLAYERS_SIZE = 6; //if you want to change, also chanfe in helperFunctions.h
Mtmchkin::Mtmchkin(const std::string &fileName){
    printStartGameMessage();
    while (!validValueInsertion<int>(m_numOfActivePlayers, &validSize, 
                            &printInvalidTeamSize, &printEnterTeamSizeMessage))
    m_activePlayers = createPlayers(m_numOfActivePlayers);


}

std::queue<std::shared_ptr<Player>>createPlayers(int numOfPlayers){
    std::string nameAndRole;
    for(int i = 0; i < numOfPlayers; i++){
        printInsertPlayerMessage();
        while (!validValueInsertion<std::string>(nameAndRole, &isValidNameAndRole));
        size_t pos = nameAndRole.find_first_of(' ');
        std::string name = nameAndRole.substr(0, pos); 
        std::string role = nameAndRole.substr(pos+1);
        std::shared_ptr<Player> newPlayer(nullptr);
        if (role == NINJA){
            newPlayer = std::shared_ptr<Player> (new Ninja (name));
        }
        if (role == HEALER){
            newPlayer = std::shared_ptr<Player>(new Healer (name));
        }
        if (role == WARRIOR){
            newPlayer = std::shared_ptr<Player>(new Warrior (name));
        }
        m_activePlayers.push(newPlayer);
    }
}

void Mtmchkin::playRound(){
    printRoundStartMessage(m_rounds);
    for (int i = 0; i < m_numOfActivePlayers ; ++i) {
        printTurnStartMessage(m_activePlayers.front()->getName());
        m_cards.front()->applyEncounter(*m_activePlayers.front());
        m_cards.push(m_cards.front());
        m_cards.pop();
        if(m_activePlayers.front()->isKnockedOut()){
            m_numOfActivePlayers--;
            m_losers.push(m_activePlayers.front());
            m_activePlayers.pop();
        }
        if(m_activePlayers.front()->win()){
            m_numOfActivePlayers--;
            m_winners.push(m_activePlayers.front());
            m_activePlayers.pop();
        }
        m_rounds++;
    }
    if(isGameOver()){
        printGameEndMessage();
    }
}

int Mtmchkin::getNumberOfRounds() const{
    return m_rounds;
}

bool Mtmchkin::isGameOver() const {
    return (!m_numOfActivePlayers);
}

void Mtmchkin::printLeaderBoard() const{
    printLeaderBoardStartMessage();
    int startingRank = 0;
    printPlayers(m_winners, startingRank);
    printPlayers(m_activePlayers, startingRank);
    printPlayers(m_losers, startingRank);
}