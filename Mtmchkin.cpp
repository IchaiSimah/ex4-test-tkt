#include "Mtmchkin.h"
#include <ostream>
#include<fstream>
#include<string>
const char WORD_SEPARATOR =' ';
const char LOWER_A ='a';
const char UPPER_A ='A';
const char LOWER_Z ='z';
const char UPPER_Z ='Z';

Mtmchkin::Mtmchkin(const std::string &fileName):m_rounds(0) {
    printStartGameMessage();
    createDeck(fileName);
    printEnterTeamSizeMessage();
    while (!getValidSize(m_numOfActivePlayers)) {
        printInvalidTeamSize();
    }
    createPlayers(m_numOfActivePlayers);
}

void Mtmchkin :: createPlayers(const int numOfPlayers){

    for(int i = 0; i < numOfPlayers; i++){
        printInsertPlayerMessage();
        std::string nameAndRole;
        do {
            std::getline(std::cin, nameAndRole);
        }
        while (!isValidNameAndRole(nameAndRole));
        size_t pos = nameAndRole.find_first_of(' ');
        std::string name = nameAndRole.substr(0, pos); 
        std::string role = nameAndRole.substr(pos+1);
        std::shared_ptr<Player> newPlayer(nullptr);
        if (role == NINJA){
            newPlayer = std::shared_ptr<Player> (new Ninja (name));
        }
        else if (role == HEALER){
            newPlayer = std::shared_ptr<Player>(new Healer (name));
        }
        else if (role == WARRIOR){
            newPlayer = std::shared_ptr<Player>(new Warrior (name));
        }
        m_activePlayers.push(newPlayer);
    }
}

void Mtmchkin::playRound(){
    printRoundStartMessage(++m_rounds);
    int removedPlayers = 0;
    for (int i = 0; i < m_numOfActivePlayers ; ++i) {
        printTurnStartMessage(m_activePlayers.front()->getName());
        m_cards.front()->applyEncounter(*m_activePlayers.front());
        m_cards.push(m_cards.front());
        m_cards.pop();
        if(m_activePlayers.front()->isKnockedOut()){
            removedPlayers++;
            m_losers.push(m_activePlayers.front());
            m_activePlayers.pop();
        }
        else if(m_activePlayers.front()->win()){
            removedPlayers++;
            m_winners.push(m_activePlayers.front());
            m_activePlayers.pop();
        }
        else{
            m_activePlayers.push(m_activePlayers.front());
            m_activePlayers.pop();
        }
    }
    m_numOfActivePlayers -= removedPlayers;

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

void  Mtmchkin::createDeck(const std::string &filename){
    std::ifstream deck(filename);
    if(!deck){
        throw DeckFileNotFound();
    }
   std::string cardType;
   int numOfCards = 0;
   while(std::getline(deck, cardType)){
    std::shared_ptr<Card> newCard(nullptr);
    if(cardType == DRAGON){
        newCard = std::shared_ptr<Card> (new Dragon);
    }
    else if(cardType == WITCH){
        newCard = std::shared_ptr<Card> (new Witch);
    }
    else if(cardType == GREMLIN){
        newCard = std::shared_ptr<Card> (new Gremlin);
    }
    else if(cardType == MANA){
        newCard = std::shared_ptr<Card> (new Mana);
    }
    else if(cardType == BARFIGHT){
        newCard = std::shared_ptr<Card> (new Barfight);
    }
    else if(cardType == WELL){
        newCard = std::shared_ptr<Card> (new Well);
    }
    else if(cardType == TREASURE){
        newCard = std::shared_ptr<Card> (new Treasure);
    }
    else if(cardType == MERCHANT){
        newCard = std::shared_ptr<Card> (new Merchant);
    }
    else{
        throw DeckFileFormatError(numOfCards);
    }
    numOfCards+=1;
    m_cards.push(newCard);
   }
   if(numOfCards < MIN_DECK_SIZE){
    throw DeckFileInvalidSize();
   }
}
bool validSize(int& size){
    return((size >= MIN_PLAYERS_SIZE) && (size <= MAX_PLAYERS_SIZE));
}
bool getValidSize(int& size){
    std::string tmpString;
    std::getline(std::cin,tmpString);
    if(tmpString.length()!=1) {
        return false;
    }
    try {
        size = stoi(tmpString);
    }
    catch (std::exception& e){
        return false;
    }
    return validSize(size);
}

bool isValidNameAndRole(std::string& nameAndRole){
    int index = 0;
    while (nameAndRole[index]!= WORD_SEPARATOR) {
        if (!isLetter(nameAndRole[index++])) {
            printInvalidName();
            return false;
        }
    }
    size_t pos = nameAndRole.find_first_of(WORD_SEPARATOR);
    std::string role = nameAndRole.substr(pos+1);
    if(role != HEALER && role != NINJA && role != WARRIOR){
        printInvalidClass();
        return false;
    }
    return true;
}

bool isLetter(char toCheck){
    return((toCheck >= UPPER_A && toCheck <= UPPER_Z) || (toCheck >= LOWER_A && toCheck <= LOWER_Z));
}

void printPlayers(std::queue<std::shared_ptr<Player>> queueToPrint, int &startingRank){
    while (!queueToPrint.empty()){
        printPlayerLeaderBoard(++startingRank, *(queueToPrint.front()));
        queueToPrint.pop();
    }
}

void printPlayers(std::stack<std::shared_ptr<Player>> stackToPrint, int &startingRank){
    while (!stackToPrint.empty()){
        printPlayerLeaderBoard(++startingRank, *(stackToPrint.top()));
        stackToPrint.pop();
    }
}