#include <stdio.h>

int main()
{
	
	long long int k , m , D , C , F , Y;
	
	scanf( "%lld%lld%lld" , &k , &m , &Y ) ;

	C = Y / 100 ;

	D = Y % 100;

	F = k + (13 * m - 1 ) / 5 + D + D / 4 + C / 4 - 2 * C;

	if( F < 0 )
	{
		F = 7 - (-F) % 7; 
	}
	else
		F %= 7;
	
	printf("%lld\n", F ); 

}