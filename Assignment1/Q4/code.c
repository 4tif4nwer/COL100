#include<stdio.h>
#include<math.h>
int main()
{
	double a , b , c , D , root1 , root2;

	scanf( "%lf %lf %lf" , &a , &b , &c );

	if(a != 0) //If a is zero, then it's not aquadratic equation
	{
	
		D= (b * b) - (4 * a * c); 

		if(D > 0) //This case has two real roots
		{

			D = sqrt( D );

			root1 = (-b - D ) / ( 2 * a );

			root2 = (-b + D ) / ( 2 * a );

			printf("%0.3lf %0.3lf\n", root1 , root2 );

		}
		else if(D == 0) // This case has one real root
		{

			root1 = (-b) / (2 * a) ;

			printf( "%0.3lf\n" , root1 );

		}

		else // If D is negative, there are no real roots.
		{

			printf( "No Real Roots\n" ) ;

		}

	}
	else
	{

		printf( "Not a Quadratic Equation\n" ) ;

	}

return 0;	

}