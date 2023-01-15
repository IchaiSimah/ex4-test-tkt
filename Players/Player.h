#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>

const std::string NINJA = "Ninja";
const std::string HEALER = "Healer";
const std::string WARRIOR = "Warrior";
const int DEFAULT_STARTING_LEVEL = 1;
const int DEFAULT_STARTING_FORCE = 5;
const int DEFAULT_MAX_HP = 100;
const int DEFAULT_STARTING_COINS = 0;
const int MAX_LEVEL = 10;

class Player{
private:
    std::string m_name;
    int m_level;
protected:
    int m_force;
    int m_HP;
    int m_coins;

public:
    Player(const std::string& name);
    void addLevel();
    void addForce(int forceToAdd);
    virtual void addHp(int hpToAdd);
    void removeHp(int hpToRemove);
    virtual void addCoins(int coinsToAdd);

    std::string getName()const;
    int getLevel() const;
    virtual int getForce() const;
    int getHp() const;
    int getCoins() const;
    bool isKnockedOut()const;
    bool pay(int price);
    bool win()const;
    virtual void printPlayerInfo(std::ostream& os) const = 0;
    protected:
    friend std::ostream& operator<<(std::ostream& os ,const Player& player);
};



#endif //PLAYER_H_