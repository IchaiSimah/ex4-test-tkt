#ifndef EX4_Treasure_H
#define EX4_Treasure_H
#include "Card.h"

const int DEFAULT_TREASURE_LOOT = 10;
const std::string TREASURE="Treasure";


class Treasure : public Card{
    public:
    Treasure();
    ~Treasure() = default;
    void applyEncounter(Player& player) const override;
    private:
    int m_loot;
};

#endif // EX4_Treasure_H