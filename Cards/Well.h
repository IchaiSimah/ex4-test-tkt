#ifndef EX4_Well_H
#define EX4_Well_H
#include "Card.h"

const int WELL_DEFAULT_DAMAGE = 10;
const std::string WELL="Well";

class Well : public Card{
    public:
    Well();
    ~Well() = default;
    void applyEncounter(Player &player) const override;
};

bool isNinja(const Player& player);

#endif // EX4_Well_H