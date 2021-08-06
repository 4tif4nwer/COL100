#include <stdio.h>
#include<math.h>

int isprime(long long int a)
{
	for( long long int i = 2 ; i <= sqrt(a) ; ++i )
	{
		if( a % i == 0)

			return 0;
	}

	return 1;
}

int main()
{
	
	long long int n , i , j , k ; 

	scanf( "%lld" , &n ) ;

	for( i = 2 ; i < n-1; ++i )
	{
		if(isprime(i))
			
			if( isprime( n - i) )

				break;
	}

	if( i == n-1 )

		printf("false\n");

	else

		printf("true\n");
	
}