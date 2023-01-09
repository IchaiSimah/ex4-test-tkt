#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
class Player{
private:
    std::string m_name;
    int m_level;
    int m_force;
    int m_HP;
    int m_coins;

public:
    void addLevel();
    void addForce(int forceToADd);
    void addHp(int hpToAdd);
    void addCoins(int coinsToAdd);

    int getForce() const;
    int isKnockedOut()const;
    bool canPay(int price)const;
};



#endif //PLAYER_H_