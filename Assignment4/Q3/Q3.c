#include <stdio.h>

int main()

{
	long long int n , i , j;

	
	scanf( "%lld", &n );

	for( i = 1 ; i <= n ; ++i) //Printing first n rows
	{

		for( j = 1 ; j < i ; ++j )

			printf(" ");


		for( j = 1 ; j <= i ; ++j )

			printf("#");


		j = ( 4 * ( n - i ) ); //Number of spaces to be left between Hashes


		for( ; j > 0 ; --j )

			printf(" ");


		for( j = 1 ; j <= i ; ++j )

			printf("#");


		
		printf("\n");


	}
	for( i = n ; i > 0 ; --i) //Printing next n rows
	{

		for( j = 1 ; j < i ; ++j )

			printf(" ");


		for( j = 1 ; j <= i ; ++j )

			printf("#");


		j = ( 4 * ( n - i ) ); //Number of spaces to be left between Hashes


		for( ; j > 0 ; --j )

			printf(" ");


		for( j = 1 ; j <= i ; ++j )

			printf("#");



		printf("\n");


	}


	
}