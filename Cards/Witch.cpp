#include "Witch.h"

Witch :: Witch(): BattleCard(WITCH, DEFAULT_WITCH_FORCE, DEFAULT_WITCH_LOOT, DEFAULT_WITCH_DAMAGE)
{}

void Witch :: printCard() const{
    printCardDetails(std::cout, m_name);
    printMonsterDetails(std::cout, m_force, m_damage, m_loot, IS_NOT_DRAGON);
    printEndOfCardDetails(std::cout);
}

void Witch :: battleLose(Player& player) const{
    player.removeHp(m_damage);
    player.addForce(-1);
    printLossBattle(player.getName(), m_name);
}