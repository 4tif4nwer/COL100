#include <stdio.h>

int main()
{
	
	int a , b , ans = 0 ;

	scanf( "%d%d" , &a , &b );

	for(int i = 31 ; i >= 0 ; --i )
	{

		if( (a & (1<<i)) != (b & (1<<i)) )

			++ans;

	}

	printf("%d", ans );

	
}