#pragma once
#include "include/Interfaces/IUnit.h"

class IPositionable {
public:
    virtual void setPosition(int row, int col) = 0;
    virtual std::pair <int, int> getPosition() const = 0;
    virtual ~IPositionable() = default;
};