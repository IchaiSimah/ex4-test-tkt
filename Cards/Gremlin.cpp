#include "Gremlin.h"

Gremlin::Gremlin(): BattleCard(GREMLIN, DEFAULT_GREMLIN_FORCE, DEFAULT_GREMLIN_LOOT, DEFAULT_GREMLIN_DAMAGE)
{}

void Gremlin :: battleLose(Player &player) const{
    player.removeHp(m_damage);
    printLossBattle(player.getName(), m_name);
}