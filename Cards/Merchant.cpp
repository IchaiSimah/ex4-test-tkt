#include "Merchant.h"

Merchant::Merchant():Card("Merchant"),
                    m_ForceBoost(DEFAULT_MERCHANT_FORCE_BOOST),
                    m_HealthBoost(DEFAULT_MERCHANT_HEALTH_BOOST)
{}

void Merchant :: applyEncounter(Player &player){
    printCardDetails(std::cout, m_name);
    printEndOfCardDetails(std::cout);
    printMerchantInitialMessageForInteractiveEncounter(std::cout, player.getName(), player.getCoins());
    std::string str;
    std::getline(std::cin, str);
    int choice =std::stoi(str), cost=0;
    while(choice !=DO_NOTHING && choice !=CHOSE_HP && choice!=CHOSE_FORCE){
        printInvalidInput;
        std::getline(std::cin, str);
        choice=std::stoi(str);
    }
    if(choice==CHOSE_HP){
        if(player.canPay(PRICE_FOR_HP)){
        player.addHp(m_HealthBoost);
        player.pay(PRICE_FOR_HP);
        cost = PRICE_FOR_HP;
        }
        else{
            printMerchantInsufficientCoins(std::cout);
            choice=0;
        }
    }
    else if(choice==CHOSE_FORCE){
        if(player.canPay(PRICE_FOR_FORCE)){
            player.addForce(m_ForceBoost);
            player.pay(PRICE_FOR_FORCE);
            cost=PRICE_FOR_FORCE;
        }
        else{
           printMerchantInsufficientCoins(std::cout);
           choice=0;
        }
    }
    printMerchantSummary(std::cout, player.getName(), choice, cost);
}

