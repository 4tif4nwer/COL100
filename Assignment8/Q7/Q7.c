#include <stdio.h>
#include<stdbool.h>

int main()

{
	int n , i , j , t ;
	
	scanf( "%lld", &n );

	int a[n][n];

	for( i = 0 ; i < n ; ++i )

		for( j = 0 ; j < n ; ++j )

			scanf( "%d" , &a[i][j] );

	for( i = 0 ; i < n ; ++i )


		for( j = i + 1 ; j < n ; ++j )

			{
				t = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = t;
			}

	printf("\n");
	for( i = 0 ; i < n ; ++i )
	{
		for( j = 0 ; j < n ; ++j )

			printf( "%d " , a[i][j] );

		printf("\n");
	}

	
	
}