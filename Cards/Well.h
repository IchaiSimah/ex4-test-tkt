#include "Card.h"


class Well : public Card{
    public:
    Well();
    void applyEncounter(Player &player) override;
    const int WELL_DEFAULT_DAMAGE = 10;
    private: 
    int m_damage;
};
