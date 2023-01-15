#include "Mana.h"


Mana :: Mana():Card(MANA)
{}

void Mana :: applyEncounter(Player& player) const {
    Healer* tmpPtr = dynamic_cast<Healer*>(&player);
    bool isHealer = (tmpPtr != nullptr);
    if (isHealer) {
        player.addHp(DEFAULT_HEALTH_POINTS_ADDED);
    }
    printManaMessage(isHealer);
}

