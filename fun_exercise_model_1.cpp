//#define EIGENLIB			// uncomment to use Eigen linear algebra library

#include "fun_head_fast.h"

// do not add Equations in this area

MODELBEGIN

// insert your equations here, ONLY between the MODELBEGIN and MODELEND words


EQUATION("Price")
/*
Price today = price yesterday + c
*/

v[0] = VL("Price", 1); //variable
v[1] = V("C"); // parameter

RESULT(v[0]+v[1])


EQUATION("C")

v[0] = V("min");
v[1] = V("max");
v[2] = uniform(v[0], v[1]); 
RESULT(v[2])

/*
EQUATION("C")
v[0] =uniform(0, 10);  //variable
RESULT(v[0])
*/







MODELEND

// do not add Equations in this area

void close_sim( void )
{
	// close simulation special commands go here
}
