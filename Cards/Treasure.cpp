#include "Treasure.h"

Treasure :: Treasure():Card("Barfight"),
                        m_loot(DEFAULT_TREASURE_LOOT)
{}

void Treasure :: applyEncounter(Player& player){
    printCard();
    player.addCoins(m_loot);
    printTreasureMessage();
}