#include "Player.h"

Player::Player(std::string &name):  m_name(name),  
                                    m_level(DEFAULT_STARTING_LEVEL),
                                    m_force(DEFAULT_STARTING_FORCE),
                                    m_HP(DEFAULT_MAX_HP),
                                    m_coins(DEFAULT_STARTING_COINS){}

 
    void Player::addLevel(){
        m_level++;
    }
    void Player::addForce(int forceToAdd){
        m_force += forceToAdd;
    }
    void Player::addHp(int hpToAdd){
       m_HP += hpToAdd;
    }
    void Player::addCoins(int coinsToAdd){
        m_coins += coinsToAdd;
    }

    int Player::getLevel() const{
        return m_level;
    }
    int Player::getForce() const{
        return m_force;
    }
    int Player::isKnockedOut()const{
        return m_HP;
    }
    bool Player::canPay(int price)const{
        return price<= m_coins;
    }

