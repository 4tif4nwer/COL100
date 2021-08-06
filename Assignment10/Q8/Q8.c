#include <stdio.h>

int a[1000];

void Merge(int l1,int r1,int l2,int r2) //(l1,r1),(l2,r2) are the first and last indices of sorted subarrays to be merged. 
{
	int n = (r2-l1+1), m =(r2-l2+1);

	int t = n + m;

	int c[t];

	int i = 0,j = l1,k = l2;

	while(i<t)
	{
		if(j<=r1 && k<=r2)
		{
			if(a[j]<a[k])
				c[i++] = a[j++];
			else
				c[i++] = a[k++];
		}
		else if(j<=r1)
			c[i++] = a[j++];
		else
			c[i++] = a[k++];

	}
	for( i = 0; i< t;++i)
		a[l1++] = c[i];
}

void Merge_Sort(int l , int r)
{
	if(l == r)//Single element in the subarray
		return;
	
	int f = (l + r)/2;

	Merge_Sort(l,f); //left half
	Merge_Sort(f+1,r); //right half

	Merge(l,f,f+1,r); 

}

int main()
{
	int n ,m , i , j , k , t ;
	
	scanf( "%d", &n );

	for( i = 0 ; i < n ; ++i )

		scanf( "%d" , &a[i] );

	Merge_Sort(0,n-1);

	for( i = 0 ; i < n ; ++i )

		printf( "%d " , a[i] );	
	
}