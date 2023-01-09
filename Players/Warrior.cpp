#include "Warrior.h"
#include "../utilities.h"
const int DOUBLE_FORCE = 2;

Warrior::Warrior(std::string &playerName): Player(playerName){}

int Warrior::getForce() const{
    return (DOUBLE_FORCE * m_force);
}

void Warrior::printPlayerInfo(std::ostream& os) const{
    printPlayerDetails(os, getName(), WARRIOR, getLevel(), getForce(), getHp(), getCoins());
}