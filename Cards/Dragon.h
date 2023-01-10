#include "BattleCard.h"


class Dragon : public BattleCard{
    public:
    Dragon();
    ~Dragon() = default;
    void printCard(std::ostream& os) const override;
    void battleLose(Player& player) const override;
    const int DEFAULT_DRAGON_FORCE = 25;
    const int DEFAULT_DRAGON_LOOT = 1000;
    const int MAX_HEALTH_POINTS = 100;
    const std::string DRAGON="Dragon";
    const bool ISDRAGON=true;
};