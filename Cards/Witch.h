#include "BattleCard.h"

const int DEFAULT_WITCH_FORCE = 11;
const int DEFAULT_WITCH_LOOT = 2;
const int DEFAULT_WITCH_DAMAGE = 10;
const int WITCH_FORCE_REMOVE = -1;
const std::string WITCH="Witch";


class Witch : public BattleCard{
    public:
    Witch();
    ~Witch() = default;
    void battleLose(Player& player) const override;
};