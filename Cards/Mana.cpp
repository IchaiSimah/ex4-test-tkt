#include "Mana.h"


Mana :: Mana():Card(MANA),
                m_heal(DEFAULT_HEALTH_POINTS_ADDED)
{}

void Mana :: applyEncounter(Player& player) const {
    Healer* tmpPtr = dynamic_cast<Healer*>(&player);
    bool isHealer = (tmpPtr != nullptr);
    if (player.getHp() < DEFAULT_MAX_HP) {
        if (isHealer) {
            player.addHp(m_heal);
        }
        printManaMessage(isHealer);
    }
}
