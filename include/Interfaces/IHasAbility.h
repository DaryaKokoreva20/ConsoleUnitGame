#pragma once
#include "Interfaces/IUnit.h"


class IHasAbility: public virtual IUnit {
public:
    virtual void useAbility() = 0;
    virtual ~IHasAbility() = default;
};