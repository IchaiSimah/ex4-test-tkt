#include "Healer.h"
#include "../utilities.h"
const int DOUBLE_HEAL = 2;

Healer::Healer(std::string &playerName): Player(playerName){}

void Healer::addHp(int hpToAdd){
        if(hpToAdd > 0){
            m_coins += (DOUBLE_HEAL * hpToAdd);
        }
    }
    void Healer::printPlayerInfo(std::ostream& os) const{
        printPlayerDetails(os, getName(), HEALER, getLevel(), getForce(), getHp(), getCoins());
    }