#include "Card.h"


class Well : public Card{
    public:
    Well():Card("Well"){} const;
    Player applyEncounter(&Player) override;
    const int WELL_DEFAULT_DAMAGE = 10;
    private: 
    int m_damage;
}