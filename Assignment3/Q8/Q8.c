#include <stdio.h>
#include <math.h>

int main()
{
	long long int sum = 0 , n ;

	scanf( "%lld" , &n );

	for(long long int i = 1 ; i < n ; ++i)
	{
		if( n%i == 0 )
			sum += i;
		
	}

	if( sum == n)
		printf("Perfect\n");
	else
		printf("Not Perfect\n");
}