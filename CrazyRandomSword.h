// Ryan Winter
// 10/10/17
// CEN4020 HW2

#include "Weapon.h"
#include <stdlib.h>
#include <string>
#include <time.h>
#include <math.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

//• CrazyRandomSword (10 points): hitpoints = random integer number between 10
//and 100. Ignores a random amount of integer armor points, ranging from to 0 to
//half of the armor the weapon hits.

class CrazyRandomSword : public Weapon{
    public:
        CrazyRandomSword() : Weapon("Crazy Random Sword", 0){
            srand(time(NULL));
        }
    virtual ~CrazyRandomSword({
    
    };
	virtual double hit(double armor);
    
}


#endif
