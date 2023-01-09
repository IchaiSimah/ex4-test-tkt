#include "Treasure.h"

Treasure :: Treasure():Card("Barfight"),
                        m_loot(DEFAULT_TREASURE_LOOT)
{}

void Treasure :: applyEncounter(Player& player){
    printCardDetails(std::cout, m_name);
    printEndOfCardDetails(std::cout);
    player.addCoins(m_loot);
    printTreasureMessage();
}