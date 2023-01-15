#include "Witch.h"

Witch :: Witch(): BattleCard(WITCH, DEFAULT_WITCH_FORCE, DEFAULT_WITCH_LOOT, DEFAULT_WITCH_DAMAGE)
{}
void Witch :: battleLose(Player& player) const{
    player.removeHp(m_damage);
    player.addForce(WITCH_FORCE_REMOVE); 
    printLossBattle(player.getName(), m_name);
}