#include "BattleCard.h"



BattleCard::BattleCard(const std::string &name, const int force, const int loot, const int damage): Card(name),
                                                                m_force(force),
                                                                m_damage(damage),
                                                                m_loot(loot)
{}


void BattleCard::applyEncounter(Player& player){
    printMonsterDetails(std::cout, m_force, m_damage, m_loot, isDragon());
    if(player.getForce() + player.getLevel() >= m_force){
        player.addLevel();
        player.addCoins(m_loot);
    }
    else{
        player.addHp(m_damage);
    }
}