#include "BattleCard.h"


class Dragon : public BattleCard{
    public:
    Dragon();
    ~Dragon() = default;
    void applyEncounter(Player& player) override;
    void printCard() override;
    void battleLose(Player& player) override;
    const int DEFAULT_DRAGON_FORCE = 25;
    const int DEFAULT_DRAGON_LOOT = 1000;
    const int MAX_HEALTH_POINTS = 100;
    const bool ISDRAGON=true;
};