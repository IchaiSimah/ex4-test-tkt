#ifndef EX4_Card_H
#define EX4_Card_H
#include <iostream>
#include <string>
#include "../Players/Player.h"
#include "../utilities.h"


/*
 *  CardType:
 *  Each card has an  inherited type:  TO CHECK
 *  BATTLE - Battle against a monster.
 * inside BATTLE there are:
 * WITCH - a kind of Battle card
 * DRAGON - a kind of Battle card
 * GREMLIN - a kind of Battle card
 *  MERCHANT - allows the player to win HealthPoints or force
 *  WELL - the player falls in the well  and lose 10 HealthPoints except if he is a ninja
 *  TREASURE - Give coins to the player
 * BARFIGHT - a barfight occur and the player lose 10 HealthPoints except if he is a warrior
 * MANA - a card only the healer can use and gives him 20 HealthPoints
*/
const int MIN_DECK_SIZE = 5;
class Card {
public:
Card(const std::string& name);
~Card() = default;
virtual void applyEncounter(Player& player) const = 0;
virtual void printCard(std::ostream& os) const;
protected:
std::string m_name;
};
std::ostream& operator<<(const std::ostream& os, const Card& card);

#endif //EX4_Card_H