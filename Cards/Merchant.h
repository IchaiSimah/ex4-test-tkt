#include "Card.h"
const int DEFAULT_MERCHANT_HEALTH_BOOST = 1;
const int DEFAULT_MERCHANT_FORCE_BOOST = 1;
const int PRICE_FOR_HP = 5;
const int PRICE_FOR_FORCE = 10;
const int CHOSE_FORCE = 2;
const int CHOSE_HP = 1;
const int DO_NOTHING = 0;
const std::string MERCHANT="Merchant";

class Merchant : public Card{
    public:
    Merchant();
    ~Merchant()= default;
    void applyEncounter(Player &player) const override;
    private: 
    int m_HealthBoost;
    int m_ForceBoost;
};