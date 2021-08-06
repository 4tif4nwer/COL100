#include<stdio.h>

int main()
{
	long long int n , i , j , b;
	
	scanf("%lld%lld" , &n , &b ); 

	int a[n] , f = 0;

	for( i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	for( i = 0 ; i < n ; ++i ) 
	{
		for( j = i + 1 ; j < n ; ++j )  
			
			if( a[i] + a[j] == b)
			{

				printf("%d %d\n" , a[i] , a[j] );

				f=1;

			}

		
	}
	if(!f)
		printf("No pairs found\n");
	return 0;

}