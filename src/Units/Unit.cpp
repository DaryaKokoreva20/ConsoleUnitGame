#include "Units/Unit.h"
#include <iostream>

int Unit::nextId = 1;

Unit::Unit(std::string unitName, int maxXP, int attackPower, int defense, int price)
    : id(nextId++),
    unitName(std::move(unitName)),
    xp(maxXP),
    maxXP(maxXP),
    attackPower(attackPower),
    defense(defense), 
    price(price),
    isAlive(true) 
{}

 // IUnit:
int Unit::getDefense() const { return defense; }
int Unit::getAttackPower() const { return attackPower; }
int Unit::getPrice() const { return price; }
std::string Unit::getName() const { return unitName; }
bool Unit::isUnitAlive() const { return isAlive; }

int Unit::getID() const { return id; }
void Unit::resetID(int newID) { id = newID; }

int Unit::getCurrentXP() const { return xp; }
int Unit::getMaxXP() const { return maxXP; }
void Unit::setXP(int amount) { xp = amount; }

void Unit::takeDamage(int damage) { 
    int realDamage = std::max(0, defense - damage);
    int previousXP = xp;
    xp -= realDamage;
    if (xp <= 0) {
        xp = 0;
        isAlive = false;
        std::cout << "[DEATH] ЮНИТ УМЕР: " << unitName << "[ID:" << id << "]. XP до: " << previousXP << ", XP после: " << xp << std::endl;
    }
    std::cout << unitName << "[ID:" << id << "] потерял " << realDamage << " XP. Текущий XP: " << xp << std::endl;
}

void Unit::healXP(int amount) { 
    if (!isAlive) return;
    if (xp >= maxXP) {
        std::cout << unitName << "[ID=" << id << "]"<< " уже имеет максимум XP, лечение не требуется.\n";
        return;
    }
    int previousXP = xp;
    xp = std::min(maxXP, xp + amount);
    int healedXP = xp - previousXP;
    if (previousXP > 0) {
        std::cout << unitName << "[ID=" << id << "]" << " восстановил " << healedXP << " XP!\n";
    }
}
