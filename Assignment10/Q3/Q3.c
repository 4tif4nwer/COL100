#include <stdio.h>

int x,i, j,ans = 0;

int binaryvariant(int a[100],int n)
{
	if(x == a[n/2]) //number found 
		return 1;
	
	else if(n ==1) //Not found
		return -1;


	int b[n];

	if(a[n/2]>x) //Left half
	{

		for(i =0;i<n/2;++i)
			b[i] = a[i];

		return binaryvariant(b,n/2);


	}
	else //right half
	{
		for(j = 0,i = n/2 + 1;i<n;++i)
			b[j++] = a[i];

		return binaryvariant(b,n - n/2);
	}
	
}
int main()

{
	int n,a[100] ;
	
	scanf("%d" , &n ); 


	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	scanf("%d",&x);

	int ans = binaryvariant(a,n);

	printf("%d", ans);
		
}