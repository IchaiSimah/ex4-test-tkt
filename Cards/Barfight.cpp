#include "Barfight.h"

Barfight :: Barfight():Card(BARFIGHT)
{} 

void Barfight :: applyEncounter(Player& player) const{
    if( !isWarrior(player) ){
        player.removeHp(BARFIGHT_DEFAULT_DAMAGE);
    }
    printBarfightMessage(isWarrior(player));
}

bool isWarrior(const Player& player) {
    if(player.getName()==WARRIOR){
        return true;
    }
    else return false;
}