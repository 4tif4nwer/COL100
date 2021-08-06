#include <stdio.h>
#include<stdbool.h>

int main()
{
	int n , i;

	scanf("%lld\n" , &n );

	int a[n];

	bool b[n+1];
	
	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	bool z = 0;

	for(int i = 0 ; i < n ; ++i )
	{
		if(!b[a[i]])
		{
			b[a[i]] = 1 ;
		}
		else
		{
			z = 1;

			printf("%d " , a[i]);
		}

	}

	if(!z)
		printf("No duplicates exist!");
	

	return 0;
}