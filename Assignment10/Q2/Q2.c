#include<stdio.h>
#include<stdbool.h>


int a[100],min2; //min2 is the location of second minimum element (changes dynamically)



int findminimum(int l,int r)
{
	int min1;
	
	if(r == l)
		return r;

	int j = findminimum(l,(l+r)/2);//Left half

	int k =findminimum((l+r)/2 + 1,r);//Right half

	min1 = (a[j]>a[k])?k:j;

	if(a[min2]>a[j+k-min1])
		min2 = j+k-min1;

	return min1;
}

int main()
{
	int n ;
	
	scanf("%lld" , &n ); 


	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	int min1 = (a[1]>a[0])?0:1; //Initial location of min1 and min2
	
	min2 = 1-min1;

	min1 = findminimum(0,n-1);

	printf("%d %d\n",min1,min2);

	
		
	return 0;

}