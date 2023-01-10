#include "BattleCard.h"


class Gremlin : public BattleCard{
    public:
    Gremlin();
    ~Gremlin()=default;
    void printCard() const override;
    void battleLose(Player& player) const override;
    const int DEFAULT_GREMLIN_FORCE = 5;
    const int DEFAULT_GREMLIN_LOOT = 2;
    const int DEFAULT_GREMLIN_DAMAGE = 10;
    const bool IS_NOT_DRAGON = false;
    const std::string GREMLIN="Gremlin";
    private:
};