#pragma once
#include "include/Interfaces/IUnit.h"
#include <memory>

class GameVisualizer {
public:
    static void printUnitStatus(std::shared_ptr<IUnit> unit);
};