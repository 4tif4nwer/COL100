#include <stdio.h>
#include <math.h>

int main()
{
	long int  n , i , j ;
	scanf("%ld" , &n );
	double sum;
	int digits = 1, tens =10;
	for(i = 1 ; i <= n; ++i)
	{
		sum = 0;
		if ( i>=tens )
		{
			++digits;
			tens *= 10;
		}
		for( j = i ; j>0 ; j/=10)
		{
			sum+=pow( j%10 , digits );
		}	

		if( i == sum)
			printf("%ld\n", i );
		
	}

}