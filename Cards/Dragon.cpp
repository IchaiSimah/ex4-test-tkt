#include "Dragon.h"

Dragon::Dragon(): BattleCard(DRAGON, DEFAULT_DRAGON_FORCE, DEFAULT_DRAGON_LOOT, MAX_HEALTH_POINTS_TO_REMOVE)
{}

void Dragon :: printCard(std::ostream& os) const{
    printCardDetails(os, m_name);
    printMonsterDetails(os, m_force, m_damage, m_loot, ISDRAGON);
    printEndOfCardDetails(os);
}

void Dragon :: battleLose(Player &player) const{
    player.removeHp(m_damage);
    printLossBattle(player.getName(), m_name);
}