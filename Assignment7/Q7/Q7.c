#include <stdio.h>

int main()
{
	
	long long int n , i , j = 0 , t ; 

	scanf( "%lld" , &n ) ;

	int a[n] , b[n];

	for( i =  0 ; i <  n ; ++i ) 

		scanf( "%d" , &a[i] );

	t = a[0] - 1;

	for( i = 0 ; i <  n ; ++i )
	{
		if(t != a[i])
		{
			t = a[i];

			a[j++] = t;
		}
		
	}	
	printf("%d\n", j );

	for( i = 0 ; i <  j ; ++i )

		printf("%d ", a[i] );

	
}