#include<stdio.h>
#include<stdbool.h>

bool isSorted(int a[] , int n)
{
	
	bool fi = 1 , fd = 1; // fi and fd tell about increasing or decreasing sequence respectively.

	for( int i = 1 ; i < n ; ++i)
	{
		if(a[i] < a[ i - 1 ] && fi)
			fi = 0;

		else if(a[i] > a[i-1] && fd)
			fd = 0;
			
	}

	return( fi || fd);

}

int main()
{
	int n ;
	
	scanf("%lld" , &n ); 

	int a[n] ;

	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	
	if(isSorted(a,n))
		printf("true\n");

	else
		printf("false\n");
		
	return 0;

}