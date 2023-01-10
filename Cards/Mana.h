#include "Card.h"


class Mana : public Card{
    public:
    Mana();
    void applyEncounter(Player& player) const override;
    const int DEFAULT_HEALTH_POINTS_ADDED = 10;
    const std::string MANA="Mana";
    private:
    int m_heal;
};
bool isHealer(const Player &player);