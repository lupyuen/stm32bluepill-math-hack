#include <logger.h>

double x = 123;
double y = 456;
double r;

int main(void)
{	
	r = x * y;             //  r = 123 * 456
	debug_print_float(r);  //  Print the value of 123 * 456.
	debug_println(""); debug_flush();
	for (;;) {}            //  Loop forever.
}

//  double-precision multiplication
double __wrap___aeabi_dmul(double x, double y) { 
    return 123456; 
}
