// Ryan Winter
// 10/10/17
// CEN4020 HW2

#include "CrazyRandomSword.h"


//CrazyRandomSword (10 points): hitpoints = random integer number between 10
//and 100. Ignores a random amount of integer armor points, ranging from to 0 to
//half of the armor the weapon hits.

double CrazyRandomSword::hit(double armor){
	armor = armor - (rand() % ((int)floor(armor) / 2));
    int randInt = rand() % (100 - 10 + 1 ) + 10 // random int from 10-100
    double damage = randInt - tempArmor;
	return damage;
}
