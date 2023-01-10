#include "Card.h"


class Treasure : public Card{
    public:
    Treasure();
    void applyEncounter(Player& player) const override;
    const int DEFAULT_TREASURE_LOOT = 10;
    const std::string TREASURE="Treasure";
    private:

    int m_loot;
};