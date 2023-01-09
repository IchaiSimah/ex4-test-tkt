#include "Card.h"


Card::Card(const std::string name): m_name(name){};

void Card :: printCard(){
    printCardDetails(std::cout, m_name);
    printEndOfCardDetails(std::cout);
}