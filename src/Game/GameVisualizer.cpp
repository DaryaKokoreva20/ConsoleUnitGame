#include "include/Game/GameVisualizer.h"
#include <iostream>


void GameVisualizer::printUnitStatus(std::shared_ptr<IUnit> unit) {
    if (!unit || !unit->isUnitAlive()) {
        std::cout << "[МЕРТВ]";
    } else {
        std::cout << unit->getName() << "[ID:" << unit->getID() << "] XP: " << unit->getCurrentXP() << "/" << unit->getMaxXP() << "\n";
    }
}