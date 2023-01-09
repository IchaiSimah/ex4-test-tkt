#include "Card.h"


class Barfight : public Card{
    public:
    Barfight();
    void applyEncounter(Player& player) override;
    const int BARFIGHT_DEFAULT_DAMAGE = 10;
    private: 
    int m_damage;
};
bool isWarrior(const Player& player);