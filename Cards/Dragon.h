#include "Card.h"


class Dragon : public Card{
    public:
    Dragon() const;
    ~Dragon() = default;
    Player applyEncounter(&Player) override;
    const int DEFAULT_DRAGON_FORCE = 25;
    const int DEFAULT_DRAGON_LOOT = 1000;
    const int MAX_HEALTH_POINTS = 100;
    private:
    int m_force;
    int m_loot;
    int m_damage;
}