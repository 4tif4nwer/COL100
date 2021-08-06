#include <stdio.h>

int main()
{
	
	int n , m , i , j ;
	
	scanf( "%d%d", &n , &m );

	int a[10][10],t[10][10];

	for( i = 0 ; i < n ; ++i )

		for( j = 0 ; j < m ; ++j )

			scanf( "%d" , &a[i][j] );

	for(int d = 0; d < m + n - 1; ++d)
	{
		for( j = 0 ; j <= d ; ++j)
		{
			i = d-j;
			if( i < n && j <  m)

				printf("%d ",a[i][j]);
		}

		printf("\n");
			
	}
}