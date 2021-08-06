#include <stdio.h>
#include<stdbool.h>

void swapnum(int *a, int *b)
{
	int t= *a;
	*a = *b;
	*b = t;

	return;
}

int main()

{
	int n,a[100],i,j ;
	
	scanf("%d" , &n ); 

	int l=0,r=0,xp,x;


	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	scanf("%d",&x);

	for(int i = 0 ; i < n ; ++i ) //counting elements less than x, greater than x, and finding current location of x.
	{
		if(a[i]<x)
			++l;
		else if(a[i]>x)
			++r;
		else
			xp = i;

	}

	if(l != xp) 
	{
		swapnum(&a[xp],&a[l]); //place x at the right position
	}

	for( i = 0,j = l + 1 ; i < l; ++i )
	{
		if(a[i]>x)
		{
			while(a[j]>x)
			{
				j++;
			}
			swapnum(&a[i],&a[j]); //If there is a element > x on the left side, there must be an element < x on the right side. Swap those two.
		}
	}
	for(int i = 0 ; i < n ; ++i )

		printf("%d ", a[i] );

	
		
}