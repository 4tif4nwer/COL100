#include <stdio.h>

int main()
{
	long long int n , i , j , k ;

	scanf( "%lld" , &n ) ;

	for( i = 1 ; i <= n ; ++i ) //Rows of the inverted pyramid
	{
		j = n + i - 1; 

		k = -1; //To print reducing numbers first

		for(  ; j < n + i ; j += k)
		{
			
			if( j <= n )
				printf("%lld", j );
			else
				printf(" ");

			
			if( j == i ) //From here, numbers are printed incleasing
				k = 1;
		}
		
		printf("\n");
	}
	
	
}