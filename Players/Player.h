#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>


const int DEFAULT_STARTING_LEVEL = 0;
const int DEFAULT_STARTING_FORCE = 0;
const int DEFAULT_MAX_HP = 100;
const int DEFAULT_STARTING_COINS = 0;
const int MAX_LEVEL = 10;

class Player{
private:
    std::string m_name;
    int m_level;
    int m_force;
    int m_HP;
    int m_coins;

public:
    Player(std::string& name);
    void addLevel();
    void addForce(int forceToAdd);
    void addHp(int hpToAdd);
    void removeHp(int hpToRemove);
    void addCoins(int coinsToAdd);

    std::string getName()const;
    int getLevel() const;
    int getForce() const;
    int isKnockedOut()const;
    bool canPay(int price)const;
    bool win()const;
    virtual void printPlayerInfo(std::ostream& os) const = 0;
    protected:
    friend std::ostream& operator<<(std::ostream& os ,const Player& player);
};



#endif //PLAYER_H_