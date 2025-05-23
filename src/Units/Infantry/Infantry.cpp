#include "Units/Infantry/Infantry.h"

Infantry::Infantry(std::string unitName, int maxXP, int attackPower, int defense, int price)
    : Unit(std::move(unitName), maxXP, attackPower, defense, price) {}


void attack() {

}