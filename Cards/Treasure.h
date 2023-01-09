#include "Card.h"


class Treasure : public Card{
    public:
    Treasure();
    void applyEncounter(Player& player) override;
    const int DEFAULT_TREASURE_LOOT = 10;
    private:

    int m_loot;
};