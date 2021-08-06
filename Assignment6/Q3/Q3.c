#include <stdio.h>

int main()

{
	int n, ans = 0 ;

	scanf("%d", &n );

	for(int i = 31 ; i >= 0 ; --i )
	{

		if( n & (1<<i) )

			++ans;

	}

	printf( "%d" , ans );

	return 0;
		
}