#include <iostream>
#include <string>
#include "../Players/Player.h"
#include "../utilities.h"

#ifndef EX4_Card_H
#define EX4_Card_H

/*
 *  CardType:
 *  Each card has an  inherited type:  TO CHECK
 *  BATTLE - Battle against a monster.
 * inside BATTLE there are:
 * WITCH - a kind of Battle card
 * DRAGON - a kind of Battle card
 * GREMLIN - a kind of Battle card
 *  MERCHANT - allows the player to win HealthPoints or force
 *  WELL - the player falls in the well  and lose HealthPoints
 *  TREASURE - Give coins to the player
 * BARFIGHT - a barfight occur and the player lose 10 HealthPoints
 * MANA - a card only the healer can use and gives him 20 HealthPoints
*/
class Card {
public:
Card(const std::string name);
virtual void applyEncounter(Player& player);
protected:
std::string m_name;
};


#endif //EX4_Card_H