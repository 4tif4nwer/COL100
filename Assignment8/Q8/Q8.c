#include <stdio.h>

int main()
{
	
	int n , i , j ;
	
	scanf( "%lld", &n );

	int a[n][n];

	for( i = 0 ; i < n ; ++i )

		for( j = 0 ; j < n ; ++j )

			scanf( "%d" , &a[i][j] );
	
	//Part b begins

	int pairs = 0;

	for( i = 0 ; i < n ; ++i )

		for( j = i + 1 ; j < n ; ++j )

			if(a[i][j])

				++pairs;

	printf("Number of pairs of friends = %d\n" , pairs);

	//Part b ends


	
	//Part c begins

	int x , y , ans = 0;

	

	scanf("%d%d" , &x , &y);

	for( i = 0 ; i < n ; ++i )
	{
		if( a[x][i] && a[i][y] )
		{
			ans = 1;
			break;
		}
	}

	if(ans)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	//Part c ends

	
}