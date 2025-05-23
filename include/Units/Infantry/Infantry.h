#pragma once
#include "Units/Unit.h"

class Infantry: public Unit {
public:
    Infantry(std::string unitName, int maxXP, int attackPower, int defense, int price);
    void attack() override;
};