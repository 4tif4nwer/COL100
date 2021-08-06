#include <stdio.h>

int main()
{
	
	long int a , b , temp;
	
	scanf("%ld%ld", &a , &b );

	if(b>a)
	{
		temp = a;

		a = b;

		b = temp;
	}


	for( ; a%b != 0 ; )
	{
		temp = b;

		b = a%b;

		a=temp;
		
	}

	printf("%ld\n", b );
	
}