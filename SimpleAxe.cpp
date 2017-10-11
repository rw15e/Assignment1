// Ryan Winter
// 10/10/17
// CEN4020 HW2

#include "SimpleAxe.h"

//SimpleAxe (5 points): hitpoints = 60. If armor is greater than 0 and less than 20,
//the axe will ignore all the armor points.

double SimpleAxe::hit(double armor){
	if (armor > 0 && armor < 20)
		armor = 0;
	return hitPoints - armor;
}
