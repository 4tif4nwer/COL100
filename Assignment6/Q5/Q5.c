#include <stdio.h>

int main()
{
	unsigned int a , i ;

	scanf( "%d" , &a );

	for( i = 0 ; i < 32 ; ++i )
	{
		if( a & (1 << i) )

			break;
	}

	printf( "%d", i );
	
	
	
}