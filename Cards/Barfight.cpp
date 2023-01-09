#include "Barfight.h"

Barfight :: Barfight():Card("Barfight"),
                        m_damage(BARFIGHT_DEFAULT_DAMAGE)
{} 

void Barfight :: applyEncounter(Player& player){
    printCardDetails(std::cout, m_name);
    printEndOfCardDetails(std::cout);
    if( !isWarrior(player) ){
        player.removeHp(m_damage);
    }
    printBarfightMessage(isWarrior(player));
}

bool isWarrior(const Player& player){
    if(player.getName()=="Warrior"){
        return true;
    }
    else return false;
}