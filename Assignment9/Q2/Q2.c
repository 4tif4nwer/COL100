#include <stdio.h>
#include<stdbool.h>

int peakIndex(int a[], int n)
{
	int l=0,r=n,mid;

	while (l<r)
	{
		mid = (l+r)/2; //BINARY SEARCH

		if(a[mid]>a[mid+1])
			r=mid;

		if(a[mid]>a[mid-1])
			l=mid;
	}

	return mid;
}

int main()
{
	int n , i;

	scanf("%lld" , &n );

	int a[n];

	
	
	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	printf("%d",peakIndex(a,n));
	

	return 0;
}