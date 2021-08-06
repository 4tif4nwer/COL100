#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	long long int i , j , k , count = 0 , n ;

	scanf( "%lld" , &n );

	bool f;

	double temp;

	
	for( i = 1  ; i <= n ; ++i )
	{
		f = 0 ; 	//This boolean value is changed to 1 if we find atleast one pair (a,b) such that a^2 b^2 = i
		
		for( j = 0 ;  j <= sqrt( i ) ; ++j )
		{
			for( k = j  ; k <= sqrt( i ) ; ++k ) //Taking each unordered pair (a,b) with a<=b
				
				if( ( k * k  +  j * j ) == i ) // checking if a^2 + b^2 =i
				{

					++count;

					f=1;

					break; // Each eligible i is counted only once
					
				}


			if(f)
				break;  // Each eligible i is counted only once

		}
	}
	
	printf("%lld", count ); //Printing th total count
	
}