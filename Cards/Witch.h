#include "BattleCard.h"
class Witch : public BattleCard{
    public:
    Witch();
    void printCard() const override;
    void battleLose(Player& player) const override;
    const int DEFAULT_WITCH_FORCE = 11;
    const int DEFAULT_WITCH_LOOT = 2;
    const int DEFAULT_WITCH_DAMAGE = 10;
    const bool IS_NOT_DRAGON = false;
    const std::string WITCH="Witch";
};