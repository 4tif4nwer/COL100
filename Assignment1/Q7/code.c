#include<stdio.h>
int main()
{
	int n;

	scanf( "%d" , &n );

	if( n >= 3 ) //We need atleast 3 sides to contruct a polygon
	{

		printf( "%0.2f\n" , (float)( 180 * (n-2) ) / n );
	
	}

	else

		printf("Invalid Input");
	
	return 0;

}