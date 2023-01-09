#include "Card.h"


class Witch : public Card{
    public:
    Witch() const;
    Player applyEncounter(&Player) override;
    const int DEFAULT_WITCH_FORCE = 11;
    const int DEFAULT_WITCH_LOOT = 2;
    const int DEFAULT_WITCH_DAMAGE = 10;
    private:
    int m_force;
    int m_loot;
    int m_damage;
}