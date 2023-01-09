#include "BattleCard.h"
class Witch : public BattleCard{
    public:
    Witch();
    void applyEncounter(Player&) override;
    void printCard() override;
    void battleLose(Player& player) override;
    const int DEFAULT_WITCH_FORCE = 11;
    const int DEFAULT_WITCH_LOOT = 2;
    const int DEFAULT_WITCH_DAMAGE = 10;
    const bool IS_NOT_DRAGON = false;
};