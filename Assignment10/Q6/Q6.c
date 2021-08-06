#include <stdio.h>
#include<stdbool.h>

//Good test case
//10
//6 1 7 9 3 8 2 5 4 0 

int a[100];

void swapnum(int *a, int *b)
{
	int t= *a;
	*a = *b;
	*b = t;
}

int Partition(int x,int l1,int r1)
{
	int l = 0,r = 0,xp,i,j;

	for(int i = l1 ; i <= r1 ; ++i )
	{
		if(a[i]<x)
			++l;
		else if(a[i]>x)
			++r;
		else
			xp = i;

	}

	if(l1 + l != xp)
	{
		swapnum(&a[xp],&a[l1 + l]);
	}
	for( i = l1,j = l1 + l + 1 ; i < l1 + l; ++i )
	{
		if(a[i]>x)
		{
			while(a[j]>x)
			{
				j++;
			}
			swapnum(&a[i],&a[j]);
		}
	}
	return l1+l;
}
void quicksort(int x,int y)
{
	
	int f = Partition(a[y],x,y); //Pivot is the last element of the subarray.
	
	if(f-x>1)
		quicksort(x,f-1); // subarray left of the pivot

	if(y-f>1)
		quicksort(f+1,y); // subarray right of the pivot
	
	return;
}

int main()

{
	int n,i ;
	
	scanf("%d" , &n );

	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	quicksort(0,n-1);

	
	for(int i = 0 ; i < n ; ++i )

		printf("%d ", a[i] );
		
}