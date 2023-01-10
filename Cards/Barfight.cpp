#include "Barfight.h"

Barfight :: Barfight():Card(BARFIGHT),
                        m_damage(BARFIGHT_DEFAULT_DAMAGE)
{} 

void Barfight :: applyEncounter(Player& player) const{
    if( !isWarrior(player) ){
        player.removeHp(m_damage);
    }
    printBarfightMessage(isWarrior(player));
}

bool isWarrior(const Player& player) {
    if(player.getName()==WARRIOR){
        return true;
    }
    else return false;
}