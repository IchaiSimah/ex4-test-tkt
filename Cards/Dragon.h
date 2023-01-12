#ifndef EX4_Dragon_H
#define EX4_Dragon_H
#include "BattleCard.h"

const int MAX_HEALTH_POINTS_TO_REMOVE = 100;
const int DEFAULT_DRAGON_FORCE = 25;
const int DEFAULT_DRAGON_LOOT = 1000;
const std::string DRAGON="Dragon";
const bool ISDRAGON=true;

class Dragon : public BattleCard{
    public:
    Dragon();
    ~Dragon() = default;
    void printCard(std::ostream& os) const override;
    void battleLose(Player& player) const override;
};

#endif // EX4_Dragon_H