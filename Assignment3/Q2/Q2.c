#include <stdio.h>

int main()
{
	long long int n;

	float a , d ;

	scanf("%lld %f %f" , &n , &a , &d );

	for(int i = 1 ; i <= n ; a += d , ++i )
	{
		printf("%g ", a );
	}

	return 0;
}