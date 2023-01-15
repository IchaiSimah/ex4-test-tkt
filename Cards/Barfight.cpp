#include "Barfight.h"

Barfight :: Barfight():Card(BARFIGHT)
{} 

void Barfight :: applyEncounter(Player& player) const{
    Warrior* tmpPtr = dynamic_cast<Warrior*>(&player);
    bool isWarrior = (tmpPtr != nullptr);
    if( !isWarrior){
        player.removeHp(BARFIGHT_DEFAULT_DAMAGE);
    }
    printBarfightMessage(isWarrior);
}
