#include "Card.h"


Card::Card(const std::string name): m_name(name){};

bool Card::isDragon()const{
    if(m_name == "Dragon") return true;
    else return false;
}