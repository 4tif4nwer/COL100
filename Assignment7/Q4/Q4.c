#include <stdio.h>

int main()
{
	
	long long int n , i , j , k ; 

	scanf( "%lld" , &n ) ;

	int a[n];

	for( i =  0 ; i <  n ; ++i ) 

		scanf( "%d" , &a[i] );

	k = a[0];

	for( i = 1 ; i <  n ; ++i )
	{
		k^=a[i];

		
	}	

	printf("%d",k);		
	
}