#include "CommonBaseBallBat.h"

//CommonBaseBallBat hitpoints = 40 and has a 25% chance to ignore all the armor.

double CommonBaseBallBat::hit(double armor){
	if(rand() % 4 == 0) // 25% chance logic
		armor = 0;
	
	return (hitpoints - armor);
}
