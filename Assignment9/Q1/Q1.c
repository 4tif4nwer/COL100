#include<stdio.h>
#include<stdbool.h>

bool findElement(int a[] , int n)
{
	int i,j=0,s=0; 
	for(i = 0; i<n;++i)
	{
		s+=a[i]; // s is sum of all elements
	}
	for(i = 0; i<n;++i)
	{
		if(j*2 + a[i] == s) // j is sum of all elements to the left of index i
			return 1;
		j+=a[i];
		
	}

	return 0;

}

int main()
{
	int n ;
	
	scanf("%lld" , &n ); 

	int a[n] ;

	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	
	printf("%d", findElement(a,n));
		
	return 0;

}