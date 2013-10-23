#include <vector>
#include <iostream>
#include <stdlib.h>
#include <math.h>

void generatePi( long int iterations )
{//Generate pi in iterations iterations.
	long double a = sqrt(2);
	long double b = 0;
	long double p = 2 + sqrt(2);

	for( int i = 0; i < iterations; i++ )
	{
		b = ( sqrt(a)*(1+b) )/( a + b );
		a = sqrt(a)/2 + 1/(2*sqrt(a));
		p = p*b*(1+a)/(1+b);
	}

	std::cout.precision(100);
	std::cout << "Pi after " << iterations << " iterations: " << p << std::endl;
}

int main( int argc, const char* argv[] )
{//Test out the Random Number Generator.
	if( argc != 2 )
	{
		std::cerr << "Usage: " << argv[0] << " Iterations" << std::endl;
	}
	else
	{
		generatePi( atol(argv[1]) );
	}
	
	return 0;
}
