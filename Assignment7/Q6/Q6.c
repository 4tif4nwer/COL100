#include <stdio.h>

int main()
{
	
	long long int n , i , l , sl ; 

	scanf( "%lld" , &n ) ;

	int a[n];

	for( i =  0 ; i <  n ; ++i ) 

		scanf( "%d" , &a[i] );

	l=(a[0]>a[1])?a[0]:a[1];

	sl=a[0]+a[1]-l;

	for( i = 2 ; i <  n ; ++i )
	{
		if(l<a[i])
		{
			sl = l;
			l = a[i];
		}	

		else if ( sl < a[i] )
			
			sl = a[i];
		
	}
	
	printf("%d\n" , sl );
}