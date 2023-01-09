#include "Mana.h"


Mana :: Mana():Card("Mana"),
                m_heal(DEFAULT_HEALTH_POINTS_ADDED)
{}

void Mana :: applyEncounter(Player& player){
    printCard();
    if(isHealer(player)){
        player.addHp(m_heal);
    }
    printManaMessage(isHealer(player));
}

bool isHealer(const Player& player){
    if(player.getName()=="Healer"){
        return true;
    }
    else return false;
}