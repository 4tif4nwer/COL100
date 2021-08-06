#include<stdio.h>

int main()
{
	long long int n , i , j;
	
	scanf("%lld" , &n ); 

	for( i = 1 ; i <= n ; ++i ) //Rows 1 to n
	{
		for( j = 1 ; j <= i ; ++j )  //Printing numbers 1 to row number(i)
			
			printf( "%lld " , j );

		printf( "\n" );
	}

	return 0;

}