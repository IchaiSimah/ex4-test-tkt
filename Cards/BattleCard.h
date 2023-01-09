#include "Card.h"


class BattleCard : public Card{
    public:
    virtual BattleCard() const;
    ~BattleCard() = default;
    void applyEncounter(&Player) override;
    private:
    int m_force;
    int m_loot;
    int m_damage;

}