#include "Healer.h"
#include "../utilities.h"
const int DOUBLE_HEAL = 2;

Healer::Healer(const std::string &playerName): Player(playerName){}

void Healer::addHp(int hpToAdd){
        if(hpToAdd > 0){
            m_HP += (DOUBLE_HEAL * hpToAdd);
        }
    }
    void Healer::printPlayerInfo(std::ostream& os) const{
        printPlayerDetails(os, getName(), HEALER, getLevel(), getForce(), getHp(), getCoins());
    }