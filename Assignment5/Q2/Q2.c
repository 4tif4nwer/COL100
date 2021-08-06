#include <stdio.h>
#include <math.h>

int main()
{
	long long int a , b , i , j , temp , count , k ;

	scanf("%lld%lld" , &a , &b );

	for( i = a ; i <= b ; ++i ) //Iterating though all numbers in the given range.
	{
		temp = cbrt( i ); // Temporarily storing the cube root of i in temp

		count = 0;

		for( j = 1 ; j <= temp ; ++j )
		{
			for( k = j ; k <= temp ; ++k ) //Considering every unordered pair (j,k) with j <= k <= temp
			{
				if( j * j * j   +   k * k * k   == i)
					{
						++count; // Counting up when we pair for i
						break; //It is useless to go for higher values of k in the loop
					}
			}

		}

		if(count >= 2) //If number of pairs found is more than 1

			printf("%lld\n", i );

	}

	
	return 0;
}