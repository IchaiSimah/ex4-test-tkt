#include "Dragon.h"

Dragon::Dragon(): BattleCard(DRAGON, DEFAULT_DRAGON_FORCE, DEFAULT_DRAGON_LOOT, MAX_HEALTH_POINTS)
{}

void Dragon :: printCard() const{
    printCardDetails(std::cout, m_name);
    printMonsterDetails(std::cout, m_force, m_damage, m_loot, ISDRAGON);
    printEndOfCardDetails(std::cout);
}

void Dragon :: battleLose(Player &player) const{
    player.removeHp(m_damage);
    printLossBattle(player.getName(), m_name);
}