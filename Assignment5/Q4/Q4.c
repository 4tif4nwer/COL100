#include <stdio.h>
#include<math.h>

int main()
{
	
	long long int n , j , ans = 0 ;

	int choice ;

	scanf("%d" , &choice );

	switch(choice)
	{
		case 1 : //Binary to decimal

		scanf("%lld" , &n );

		for( j = 0 ; n > 0 ; n /= 10)
		{
			ans += pow( 2 , j++ ) * ( n % 10 );		
		
		}

		printf("%lld\n", ans );
		
		break ;

		case 2 : //Decimal to binary

		scanf("%lld" , &n );

		for( j = 1 ; n > 0 ; n /= 2 , j*=10 )
		{
			
			ans += j * ( n % 2 );
			
		}

		printf("%lld\n", ans );

		break;

		default :

		printf("Invalid input\n");

	} 

	
}