#ifndef EX4_Gremlin_H
#define EX4_Gremlin_H
#include "BattleCard.h"
const int DEFAULT_GREMLIN_FORCE = 5;
const int DEFAULT_GREMLIN_LOOT = 2;
const int DEFAULT_GREMLIN_DAMAGE = 10;
const std::string GREMLIN="Gremlin";

class Gremlin : public BattleCard{
    public:
    Gremlin();
    ~Gremlin()=default;
};

#endif // EX4_Gremlin_H