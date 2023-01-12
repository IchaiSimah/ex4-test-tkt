#ifndef EX4_Mana_H
#define EX4_Mana_H
#include "Card.h"

const int DEFAULT_HEALTH_POINTS_ADDED = 10;
const std::string MANA="Mana";

class Mana : public Card{
    public:
    Mana();
    ~Mana() = default;
    void applyEncounter(Player& player) const override;
    private:
    int m_heal;
};
bool isHealer(const Player &player);

#endif // EX4_Mana_H