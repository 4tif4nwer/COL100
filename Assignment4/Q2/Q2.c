#include <stdio.h>

int main()
{
	long long int n , i , j;

	scanf("%lld" , &n );

	for(i = n ; i > 0 ; --i) // Printing n rows
	{
		for( j = i ; j > 0 ; --j)  //Printing numbers of each row in reverse

			printf( "%lld " , j );

		printf( "\n" );
	}

	return 0;
}