#ifndef EX4_BattleCard_H
#define EX4_BattleCard_H

#include "Card.h"

const bool IS_NOT_DRAGON = false;

class BattleCard : public Card{
    public:
    BattleCard(const std::string& name,const int force,const int loot, const int damage);
    ~BattleCard() = default;
    virtual void applyEncounter(Player& player) const override;
    virtual void printCard(std::ostream& os) const override;
    virtual  void battleLose(Player& player) const = 0;
    void battleWin(Player& player) const;
    protected:
    int m_force;
    int m_loot;
    int m_damage;
};

#endif //Battle_Card_H