#include "Card.h"


class Treasure : public Card{
    public:
    Treasure():Card("Barfight"){} const;
    Player applyEncounter(&Player) override;
    const int DEFAULT_TREASURE_LOOT = 10;
    private:

    int m_loot;
}