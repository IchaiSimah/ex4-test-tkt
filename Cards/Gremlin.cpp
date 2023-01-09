#include "Gremlin.h"

Gremlin::Gremlin(): BattleCard("Gremlin", DEFAULT_GREMLIN_FORCE, DEFAULT_GREMLIN_LOOT, DEFAULT_GREMLIN_DAMAGE)
{}

void Gremlin::printCard(){
    printCardDetails(std::cout, m_name);
    printMonsterDetails(std::cout, m_force, m_damage, m_loot, IS_NOT_DRAGON);
    printEndOfCardDetails(std::cout);
}

void Gremlin :: battleLose(Player &player){
    player.removeHp(m_damage);
    printLossBattle(player.getName(), m_name);
}