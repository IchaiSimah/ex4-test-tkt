#ifndef WARRIOR_H_
#define WARRIOR_H_
#include "Player.h"
class Warrior : public Player{
    Warrior(std::string &playerName);
    int getForce() const override;
    void printPlayerInfo(std::ostream& os) const override;

};

#endif//WARRIOR_H_