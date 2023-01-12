#include "Merchant.h"

Merchant::Merchant():Card(MERCHANT),
                    m_HealthBoost(DEFAULT_MERCHANT_HEALTH_BOOST),
                    m_ForceBoost(DEFAULT_MERCHANT_FORCE_BOOST)
{}

void Merchant :: applyEncounter(Player &player) const{
    printMerchantInitialMessageForInteractiveEncounter(std::cout, player.getName(), player.getCoins());
    std::string str;
    bool validInput = false;
    int choice, cost = 0;

    while(!validInput){
        try{
            std::getline(std::cin, str);
            choice =std::stoi(str);
        }
        catch(std::exception){
            printInvalidInput;
            continue;
        } 
        
        if(choice !=DO_NOTHING && choice !=CHOSE_HP && choice!=CHOSE_FORCE){
            printInvalidInput;
            continue;
        }
        validInput = true;
    }
    if(choice==CHOSE_HP){                       //TO_CHECK
        if(player.pay(PRICE_FOR_HP)){
            player.addHp(m_HealthBoost);
            cost = PRICE_FOR_HP;
        }
        else{
            printMerchantInsufficientCoins(std::cout);
            choice=DO_NOTHING;
        }
    }
    else if(choice==CHOSE_FORCE){
        if(player.pay(PRICE_FOR_FORCE)){
            player.addForce(m_ForceBoost);
            cost=PRICE_FOR_FORCE;
        }
        else{
           printMerchantInsufficientCoins(std::cout);
           choice=DO_NOTHING;
        }
    }
    printMerchantSummary(std::cout, player.getName(), choice, cost);
}

