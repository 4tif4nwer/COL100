#include <stdio.h>
#include<stdbool.h>

int main()

{
	long long int n , i , j;

	bool f = 1;

	
	scanf( "%lld", &n );

	int a[n][n];

	for( i = 0 ; i < n ; ++i )

		for( j = 0 ; j < n ; ++j )

			scanf( "%d" , &a[i][j] );

	for( i = 0 ; i < n && f ; ++i )


		for( j = i + 1 ; j < n && f ; ++j )

			if( a[i][j] != a[j][i] )

				f = 0;

	if(f)
		printf("Symmetric\n");
	else
		printf("Not Symmetric\n");
	
}