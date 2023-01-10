#include "BattleCard.h"


class Gremlin : public BattleCard{
    public:
    Gremlin();
    ~Gremlin()=default;
    void battleLose(Player& player) const override;
    const int DEFAULT_GREMLIN_FORCE = 5;
    const int DEFAULT_GREMLIN_LOOT = 2;
    const int DEFAULT_GREMLIN_DAMAGE = 10;
    const std::string GREMLIN="Gremlin";
    private:
};