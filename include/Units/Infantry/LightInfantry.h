#pragma once
#include "Units/Infantry/Infantry.h"
#include "Interfaces/IHasAbility.h"


class LightInfantry: public Infantry, public virtual IHasAbility {
public:
    LightInfantry();

    void useAbility() override;
};