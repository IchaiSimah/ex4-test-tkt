#include "Merchant.h"

Merchant::Merchant():Card("Merchant"),
                    m_ForceBoost(DEFAULT_MERCHANT_FORCE_BOOST),
                    m_HealthBoost(DEFAULT_MERCHANT_HEALTH_BOOST)
{}

void Merchant :: applyEncounter(Player &player){
    printCard();
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

