#include<stdio.h>

int main()

{

	int n , ans;

	int a = 1 , b = 1 ; //First two elements of the fibonacci series

	scanf( "%d" , &n );

	if(n>2)
	{
		for(int i = 1 ; i <= n - 2 ; ++i )
		{
			
			ans= a + b;
			
			a = b;
			
			b = ans;

		}

	}
	
	else
		ans = 1;

	printf( "%d" , ans );
}