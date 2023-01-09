#include "Card.h"


class BattleCard : public Card{
    public:
    BattleCard(const std::string& name,const int force,const int loot, const int damage);
    ~BattleCard() = default;
    virtual void applyEncounter(Player& player);
    
    private:
    int m_force;
    int m_loot;
    int m_damage;

};