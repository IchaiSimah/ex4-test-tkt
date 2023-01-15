#include "Well.h"

Well :: Well():Card(WELL)
{}

void Well :: applyEncounter(Player& player) const {
    if( !isNinja(player) ){
        player.removeHp(WELL_DEFAULT_DAMAGE);
    }
    printWellMessage(isNinja(player));
}

bool isNinja(const Player& player){
    if(player.getName()==NINJA){
        return true;
    }
    else return false;
}