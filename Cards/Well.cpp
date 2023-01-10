#include "Well.h"

Well :: Well():Card(WELL),
                m_damage(WELL_DEFAULT_DAMAGE)
{}

void Well :: applyEncounter(Player& player) const {
    if( !isNinja(player) ){
        player.removeHp(m_damage);
    }
    printWellMessage(isNinja(player));
}

bool isNinja(const Player& player){
    if(player.getName()==NINJA){
        return true;
    }
    else return false;
}