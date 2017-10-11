// Ryan Winter
// 10/10/17
// CEN4020 HW2

#include "Weapon.h"
#include <stdlib.h>
#include <string>
#include <time.h>
#include <math.h>

#ifndef COMMONBASEBALLBAT_H
#define COMMONBASEBALLBAT_H

//CommonBaseBallBat hitpoints = 40 and has a 25% chance to ignore all the armor.

class CommonBaseBallBat : public Weapon{
    public:
        CommonBaseBallBat() : Weapon("Common Baseball Bat", 40){};
        virtual ~CommonBaseBallBat({};
	      virtual double hit(double armor);
    
}

#endif
