#include "Ninja.h"
#include "../utilities.h"
const int DOUBLE_STEEL = 2;

Ninja::Ninja(const std::string &playerName): Player(playerName){}

void Ninja::addCoins(int coinsToAdd){
        if(coinsToAdd > 0){
            m_coins += (DOUBLE_STEEL * coinsToAdd);
        }
    }
    void Ninja::printPlayerInfo(std::ostream& os) const{
        printPlayerDetails(os, getName(), NINJA, getLevel(), getForce(), getHp(), getCoins());
    }