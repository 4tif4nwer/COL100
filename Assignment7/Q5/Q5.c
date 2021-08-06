#include <stdio.h>

int main()
{
	
	long long int n , i , j , k ; 

	scanf( "%lld" , &n ) ;

	int a[n];

	for( i =  0 ; i <  n ; ++i ) 

		scanf( "%d" , &a[i] );

	for( i = 0 ; i <  n ; ++i )
	{
		k = a[i];

		for( j = i + 1 ; j < n && k ; ++j )
		{
			k+=a[j];

		}
		if(!k)
		{
			printf( "true\n" );

			break;

		}
	}
	if( i == n )
		
		printf( "false\n" );			
	
}