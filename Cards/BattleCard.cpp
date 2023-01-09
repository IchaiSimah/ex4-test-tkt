#include "BattleCard.h"



BattleCard::BattleCard(const std::string &name, const int force, const int loot, const int damage): Card(name),
                                                                m_force(force),
                                                                m_damage(damage),
                                                                m_loot(loot)
{}


void BattleCard::applyEncounter(Player& player){
    printCard();
    if(player.getForce() + player.getLevel() >= m_force){
        player.addLevel();
        player.addCoins(m_loot);
        printWinBattle(player.getName(), m_name);
    }
    else{
        battleLose(player);
    }
}

bool BattleCard::isWitch()const{
    if(m_name == "Witch") return true;
    else return false;
}