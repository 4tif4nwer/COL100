#include <stdio.h>

int main()

{
	int n;

	double temp , sum =0 ; 
	
	scanf("%d", &n );

	for( ; n > 0 ; --n)
	{
		scanf( "%lf" , &temp );

		sum += temp;

	}
	printf("%g\n", sum );
}