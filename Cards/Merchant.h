#include "Card.h"


class Merchant : public Card{
    public:
    Merchant();
    ~Merchant();
    void applyEncounter(Player &player) override;
    const int DEFAULT_MERCHANT_HEALTH_BOOST = 1;
    const int DEFAULT_MERCHANT_FORCE_BOOST = 1;
    const int PRICE_FOR_HP = 5;
    const int PRICE_FOR_FORCE = 10;
    const int CHOSE_FORCE = 2;
    const int CHOSE_HP = 1;
    const int DO_NOTHING = 0;
    private: 
    int m_HealthBoost;
    int m_ForceBoost;
};