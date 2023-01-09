#include "Card.h"


class Merchant : public Card{
    public:
    Merchant():Card("Merchant"){} const;
    Player applyEncounter(&Player) override;
    const int DEFAULT_MERCHANT_HEALTH_BOOST = 1;
    const int DEFAULT_MERCHANT_FORCE_BOOST = 1;
    private: 
    int HealthBoost;
    int ForceBoost;
}