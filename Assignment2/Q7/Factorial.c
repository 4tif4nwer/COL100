#include <stdio.h>

int main()

{
	int n;

	long long int fact = 1; 

	scanf( "%d" , &n );

	for(int i = 2; i <= n ; ++i )
	{
		fact *= i;
	}

	printf( "%lld" , fact );

	return 0;


}