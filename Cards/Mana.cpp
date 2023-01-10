#include "Mana.h"


Mana :: Mana():Card(MANA),
                m_heal(DEFAULT_HEALTH_POINTS_ADDED)
{}

void Mana :: applyEncounter(Player& player) const{
    if(isHealer(player)){
        player.addHp(m_heal);
    }
    printManaMessage(isHealer(player));
}

bool isHealer(const Player& player){
    if(player.getName()==HEALER){
        return true;
    }
    else return false;
}