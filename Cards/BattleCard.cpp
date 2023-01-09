#include "BattleCard.h"

bool isDragon(){
    if(name == "Dragon") return true;
    else return false;
}

void BattleCard::applyEncounter(&Player player){
    printMonsterDetails(std::cout, BattleCard.m_force, BattleCard.m_damage, BattleCard.m_loot, isDragon(BattleCard.m_name));
    if(player.getForce() + player.getLevel() >= BattleCard.m_force){
        player.addLevel();
        player.addLoot(BattleCard.m_loot);
    }
    else{
        player.removeHp(BattleCard.m_damage);
    }
}