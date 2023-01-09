#include "Card.h"


class Mana : public Card{
    public:
    Mana();
    void applyEncounter(Player& player) override;
    const int DEFAULT_HEALTH_POINTS_ADDED = 10;
    private:
    int m_heal;
};
bool isHealer(const Player &player);