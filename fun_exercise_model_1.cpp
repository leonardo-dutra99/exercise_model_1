//#define EIGENLIB			// uncomment to use Eigen linear algebra library

#include "fun_head_fast.h"

// do not add Equations in this area

MODELBEGIN

// insert your equations here, ONLY between the MODELBEGIN and MODELEND words


EQUATION("Price")
/*
Price today = prince yesterday + c
*/

v[0] = VL("Price", 1); //variable
v[1] = V("c"); // parameter

RESULT(v[0]+v[1])










MODELEND

// do not add Equations in this area

void close_sim( void )
{
	// close simulation special commands go here
}
