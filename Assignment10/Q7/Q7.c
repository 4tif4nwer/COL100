#include <stdio.h>
#include<stdbool.h>

int main()

{
	int n ,m , i , j , k , t ;
	
	scanf( "%d", &n );

	int a[n+1];

	for( i = 0 ; i < n ; ++i )

		scanf( "%d" , &a[i] );

	scanf( "%d", &m );

	int b[m+1];

	for( i = 0 ; i < m ; ++i )

		scanf( "%d" , &b[i] );


	printf("\n");

	t = m + n; //Size of new merged array

	int c[t];

	i = j = k = 0;

	while(i<t)
	{
		if(j<n && k<m)
		{
			if(a[j]<b[k])
				c[i++] = a[j++];
			else
				c[i++] = b[k++];
		}
		else if(j<n)
			c[i++] = a[j++];
		else
			c[i++] = b[k++];

	}

	for( i = 0 ; i < t ; ++i )

		printf( "%d " , c[i] );

	
	
}