#include <stdio.h>

int main()
{
	
	int n , k , i ;

	scanf( "%d" , &n );

	int a[n] , b[n] ; //b is secondary array to store array elements after the right shift

	for( i = 0 ; i < n ; ++i )
	
		scanf( "%d" , &a[i] );

	scanf( "%d" , &k );

	k %= n;
	
	for(int j = 0, i = 0 ; j < n ; ++j )
	{
		i = j + k ;

		i %= n;

		b[i] = a[j];
	}
	

	for( i = 0 ; i < n ; ++i )
	
		printf( "%d " , b[i] );
	


}