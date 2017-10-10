// Ryan Winter
// 10/10/17
// CEN4020 HW2


#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

//• CrazyRandomSword (10 points): hitpoints = random integer number between 10
//and 100. Ignores a random amount of integer armor points, ranging from to 0 to
//half of the armor the weapon hits.

class CrazyRandomSword : public Weapon {
    public:
        CrazyRandomSword() : Weapon("Crazy Random Sword", 0){
            
        }
    
    
}


#endif
