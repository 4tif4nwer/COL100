#include <stdio.h>

int main()
{
	long long int a , b , i , j , count = 0 ;

	scanf( "%lld%lld" , &a , &b ) ;

	for( j = a ; j <= b ; ++j ) //Iterating j from a to b
	{
		for( i = a ; i <= j ; ++i ) //Iterating i from a to j 

			if( j % i == 0 )

				++count;
	}

	printf( "%lld" , count );
}