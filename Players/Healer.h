#ifndef HEALER_H_
#define HEALER_H_
#include "Player.h"
class Healer : public Player{
    Healer(std::string &playerName);
    void addHp(int hpToAdd) override;
    void printPlayerInfo(std::ostream& os) const override;

};

#endif//HEALER_H_