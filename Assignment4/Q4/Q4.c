#include <stdio.h>
#include<math.h>
#include <stdbool.h>

int main()
{
	
	long long int n , i , j , k , l ; //i and j are iterators for row and column while k is incremanted to print successive primes 

	scanf( "%lld" , &n ) ;

	for ( i=1 , k=2 ; i <= n ; ++i )
	{
		for( j = 1 ; j <= n ; ++j , ++k )
		{
			for( ; ; ++k ) //To find the next prime number
			{
				bool f=1;
				for( l = 2 ; l <= sqrt( k ) ; ++l ) //To check if k is prime or not
					{
						if( k % l == 0 )
							f = 0;
					}
				if( f )
					break; //The current k in the loop is a prime number.

			}
			printf( "%lld " , k );

		}
		printf( "\n" );
	}
}