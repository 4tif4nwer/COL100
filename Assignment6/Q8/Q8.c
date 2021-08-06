#include <stdio.h>

int main()
{
	int n , l , s , i;

	scanf( "%d" , &n );

	int a[n] ;

	for( i = 0 ; i < n ; ++i )
	
		scanf( "%d" , &a[i] );

	l = s = 0;


	for( i = 1 ; i < n ; ++i )
	{
		if( a[i] > a[l] )

			l = i;
		
		else if( a[i] < a[s] )

			s = i;

	}

	i = a[l]; //swap of array elements at position l and s

	a[l] = a[s];
	
	a[s] = i;

	for( i = 0 ; i < n ; ++i )
	
		printf( "%d " , a[i] );

}