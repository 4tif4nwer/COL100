#include <stdio.h>

int main()

{
	int i , m , n ;

	scanf( "%d%d" , &m , &n );

	int a[n];
	
	for( i = 0; i < n ; ++i )
	{
		scanf( "%d" , &a[i] );
	}

	int count[m+1]; // Stores location of all numbers in the array that are <= (m)

	for( i = 0 ; i <= m; ++i)
	{
		count[a[i]] = -1; // -1 marks no occurence in the array
	}

	for( i =0;i<n;++i)
	{
		if(a[i] >= m)
			continue;

		if( count[m - a[i]]>=0)
		{
			printf("%d %d",count[m-a[i]],i);
			break;
		}

		count[a[i]]=i;
	}
		
}