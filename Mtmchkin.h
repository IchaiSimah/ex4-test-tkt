#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_
#include "Cards/Card.h"
#include "Cards/Barfight.h"
#include "Cards/Dragon.h"
#include "Cards/Gremlin.h"
#include "Cards/Mana.h"
#include "Cards/Merchant.h"
#include "Cards/Well.h"
#include "Cards/Witch.h"
#include "Players/Player.h"
#include "Players/Ninja.h"
#include "Players/Healer.h"
#include "Players/Warrior.h"
#include "utilities.h"
#include <queue>
#include <stack>
#include <memory>
class Mtmchkin{
    std::queue<std::shared_ptr<Card>> m_cards;
    std::queue<std::shared_ptr<Player>> m_activePlayers;
    std::queue<std::shared_ptr<Player>> m_winners;
    std::stack<std::shared_ptr<Player>> m_losers;
    int m_rounds;
    int m_numOfActivePlayers;
public:
    
    /*
    * C'tor of Mtmchkin class
    *
    * @param filename - a file which contains the cards of the deck.
    * @return
    *      A new instance of Mtmchkin.
    */
    explicit Mtmchkin(const std::string &fileName);
    
    /*
    * Play the next Round of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void playRound();
    
    /*
    * Prints the leaderBoard of the game at a given stage of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void printLeaderBoard() const;
    
    /*
    *  Checks if the game ended:
    *
    *  @return
    *          True if the game ended
    *          False otherwise
    */
    bool isGameOver() const;
    
	/*
    *  Returns the number of rounds played.
    *
    *  @return
    *          int - number of rounds played
    */
    int getNumberOfRounds() const;
    private:
    std::queue<std::shared_ptr<Card>> m_cards;
    std::queue<std::shared_ptr<Player>> m_activePlayers;
    std::queue<std::shared_ptr<Player>> m_winners;
    std::stack<std::shared_ptr<Player>> m_losers;
    int m_rounds;
    int m_numOfActivePlayers;
};



#endif /* MTMCHKIN_H_ */
