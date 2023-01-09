#include "Card.h"


class Mana : public Card{
    public:
     Mana():Card("Mana"){} const;
    Player applyEncounter(&Player) override;

    const DEFAULT_HEALTH_POINTS_ADDED=10;
    private:
    int m_heal;
}