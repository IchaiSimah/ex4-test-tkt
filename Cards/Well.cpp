#include "Well.h"

Well :: Well():Card("Well"),
                m_damage(WELL_DEFAULT_DAMAGE)
{}

void Well :: applyEncounter(Player& player){
    printCardDetails(std::cout, m_name);
    printEndOfCardDetails(std::cout);
    if( !isNinja(player) ){
        player.removeHp(m_damage);
    }
    printWellMessage(isNinja(player));
}

bool isNinja(const Player& player){
    if(player.getName()=="Ninja"){
        return true;
    }
    else return false;
}