#ifndef EX4_Barfight_H
#define EX4_Barfight_H
#include "Card.h"
const int BARFIGHT_DEFAULT_DAMAGE = 10;
const std::string BARFIGHT="Barfight";

class Barfight : public Card{
    public:
    Barfight();
    ~Barfight() = default;
    void applyEncounter(Player& player) const override;
};
bool isWarrior(const Player& player);

#endif // EX4_Barfight.h