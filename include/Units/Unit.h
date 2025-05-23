#pragma once
#include <string>
#include "include/Interfaces/IUnit.h"
#include "include/Interfaces/IPositionable.h"


class Unit: public virtual IUnit, public virtual IPositionable {
protected:
    int id;
    static int nextId;
    std::string unitName;
    int xp;
    int maxXP;
    int attackPower;
    int defense;
    int price;
    bool isAlive;
    int row = -1;
    int col = -1;

public:
    Unit(std::string unitName, int maxXP, int attackPower, int defense, int price);

    // IUnit:
    int getDefense() const override;
    int getAttackPower() const override;
    int getPrice() const override;
    std::string getName() const override;
    bool isUnitAlive() const override;

    int getID() const override;
    void resetID(int newID) override;

    int getCurrentXP() const override;
    int getMaxXP() const override;
    void setXP(int amount) override;

    void takeDamage(int damage) override;
    void healXP(int amount) override;
    virtual void attack() = 0;

    // IPositionable:
    void setPosition(int row, int col) override;
    std::pair <int, int> getPosition() const override;
};