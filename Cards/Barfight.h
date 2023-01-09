#include "Card.h"


class Barfight : public Card{
    public:
    Barfight():Card("Barfight"){} const;
    Player applyEncounter(&Player) override;
    const int BARFIGHT_DEFAULT_DAMAGE = 10;
    private: 
    int m_damage;
}