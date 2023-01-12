#include "Card.h"


Card::Card(const std::string& name): m_name(name){}

void Card :: printCard(std::ostream& os) const{
    printCardDetails(os, m_name);
    printEndOfCardDetails(os);
}

std::ostream& operator<<(std::ostream& os, const Card& card){
    card.printCard(os);
    return os;
}