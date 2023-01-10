#include "Treasure.h"

Treasure :: Treasure():Card(TREASURE),
                        m_loot(DEFAULT_TREASURE_LOOT)
{}

void Treasure :: applyEncounter(Player& player)const {
    player.addCoins(m_loot);
    printTreasureMessage();
}