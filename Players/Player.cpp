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
        if (m_force < 0){
            m_force = 0;
        }
    }
    void Player::addHp(int hpToAdd){
        if(hpToAdd > 0){
            m_HP += hpToAdd;
            if(m_HP > DEFAULT_MAX_HP){
                m_HP = DEFAULT_MAX_HP;
            }
        }
    }
    void Player::removeHp(int hpToRemove){
        if(hpToRemove > 0){
            m_HP -= hpToRemove;
            if(m_HP < 0){
                m_HP = 0;
            }
        }
    }
    
    void Player::addCoins(int coinsToAdd){
        if(coinsToAdd>0){
            m_coins += coinsToAdd;
        }
    }

    int Player::getLevel() const{
        return m_level;
    }
    int Player::getForce() const{
        return m_force;
    }

    std::string Player::getName()const{
        return m_name;
    }
    int Player::getHp() const{
        return m_HP;
    }
    int Player::getCoins() const{
        return m_coins;
    }
    bool Player::isKnockedOut()const{
        return !m_HP;
    }
    bool Player::canPay(int price)const{
        return price<= m_coins;
    }
    bool Player::win()const{
        return m_level == MAX_LEVEL;
    }

    std::ostream& operator<<(std::ostream& os ,const Player& player){
    player.printPlayerInfo(os);
    return os;

}
