#include "Card.h"

const int DEFAULT_TREASURE_LOOT = 10;
const std::string TREASURE="Treasure";


class Treasure : public Card{
    public:
    Treasure();
    ~Treasure() = default;
    void applyEncounter(Player& player) const override;
    const int DEFAULT_TREASURE_LOOT = 10;
    const std::string TREASURE="Treasure";
    private:

    int m_loot;
};