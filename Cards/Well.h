#include "Card.h"


class Well : public Card{
    public:
    Well();
    ~Well() = default;
    void applyEncounter(Player &player) const override;
    const int WELL_DEFAULT_DAMAGE = 10;
    const std::string WELL="Well";
    private: 
    int m_damage;
};

bool isNinja(const Player& player);