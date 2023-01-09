#include "Card.h"


class Gremlin : public Card{
    public:
    Gremlin() const;
    Player applyEncounter(&Player) override;
    const int DEFAULT_GREMLIN_FORCE = 5;
    const int DEFAULT_GREMLIN_LOOT = 2;
    const int DEFAULT_GREMLIN_DAMAGE = 10;
    private:
    int m_force;
    int m_loot;
    int m_damage;
}