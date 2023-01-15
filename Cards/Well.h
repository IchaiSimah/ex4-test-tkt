#ifndef EX4_Well_H
#define EX4_Well_H
#include "Card.h"
#include "../Players/Ninja.h"

const int WELL_DEFAULT_DAMAGE = 10;
const std::string WELL="Well";

class Well : public Card{
    public:
    Well();
    ~Well() = default;
    void applyEncounter(Player &player) const override;
};

#endif // EX4_Well_H