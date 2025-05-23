#pragma once
#include <string>

class IUnit {
public:
    virtual int getDefense() const = 0;
    virtual int getAttackPower() const = 0;
    virtual int getPrice() const = 0;
    virtual std::string getName() const = 0;
    virtual bool isUnitAlive() const = 0;

    virtual int getID() const = 0;
    virtual void resetID(int newID) = 0;

    virtual int getCurrentXP() const = 0;
    virtual int getMaxXP() const = 0;
    virtual void setXP(int xp) = 0;

    virtual void attack() = 0;
    virtual void takeDamage(int damage) = 0;
    virtual void healXP(int xp) = 0;

    virtual ~IUnit() = default;
};