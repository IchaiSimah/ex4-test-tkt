#include "Card.h"


class Barfight : public Card{
    public:
    Barfight();
    ~Barfight() = default;
    void applyEncounter(Player& player) const override;
    const int BARFIGHT_DEFAULT_DAMAGE = 10;
    const std::string BARFIGHT="Barfight";
    private: 
    int m_damage;
};
bool isWarrior(const Player& player);