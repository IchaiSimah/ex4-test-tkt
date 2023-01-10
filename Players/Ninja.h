#ifndef NINJA_H_
#define NINJA_H_
#include "Player.h"

class Ninja : public Player{
public:
    explicit Ninja(const std::string &playerName);
    void addCoins(int coinsToAdd) override;
    void printPlayerInfo(std::ostream& os) const override;
};

#endif//NINJA_H_