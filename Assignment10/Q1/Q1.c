#include<stdio.h>
#include<stdbool.h>
int a[100];



int findminimum(int l,int r)
{
	
	if(r == l)
		return r;

	int j = findminimum(l,(l+r)/2);

	int k =findminimum((l+r)/2 + 1,r);



	return (a[j]>a[k])?k:j;
}

int main()
{
	int n ;
	
	scanf("%lld" , &n ); 


	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	printf("%d\n",findminimum(0,n-1));

	
		
	return 0;

}