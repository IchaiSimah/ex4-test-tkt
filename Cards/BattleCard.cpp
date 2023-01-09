#include "BattleCard.h"



BattleCard::BattleCard(const std::string &name, const int force, const int loot, const int damage): Card(name),
                                                                m_force(force),
                                                                m_damage(damage),
                                                                m_loot(loot)
{}


void BattleCard::applyEncounter(Player& player){
    printCardDetails(std::cout, m_name);
    printMonsterDetails(std::cout, m_force, m_damage, m_loot, isDragon());
    printEndOfCardDetails(std::cout);
    if(player.getForce() + player.getLevel() >= m_force){
        player.addLevel();
        player.addCoins(m_loot);
        printWinBattle(player.getName(), m_name);
    }
    else{
        player.removeHp(m_damage);
        if(isWitch()) {
            player.addForce(-1);
        }
        printLossBattle(player.getName(), m_name);
    }
}

bool BattleCard::isDragon()const{
    if(m_name == "Dragon") return true;
    else return false;
}
bool BattleCard::isDragon()const{
    if(m_name == "Witch") return true;
    else return false;
}