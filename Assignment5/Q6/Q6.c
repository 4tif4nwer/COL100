#include <stdio.h>

int main()
{
	long long int n;

	double guess, nextg , check ; //Nextg and check are auxilliary

	scanf( "%lld" , &n ) ;

	guess = 2;

	nextg = n / 2 ;

	check = n - guess * guess;

		if(check < 0)
			check = -check;

	while( check  > 0.001 )
	{
		guess =( guess + nextg ) / 2;  

		nextg = n / guess;

		check = n - guess * guess;

		if(check < 0) //To take absolute value of difference
			check = -check;
	}

	printf("%lf\n", guess );

}


