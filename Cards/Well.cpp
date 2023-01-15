#include "Well.h"

Well :: Well():Card(WELL)
{}

void Well :: applyEncounter(Player& player) const {
        Ninja* tmpPtr = dynamic_cast<Ninja*>(&player);
    bool isNinja = (tmpPtr != nullptr);
    if( !isNinja){
        player.removeHp(WELL_DEFAULT_DAMAGE);
    }
    printWellMessage(isNinja);
}
