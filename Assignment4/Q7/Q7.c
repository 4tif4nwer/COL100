#include <stdio.h>

int main()
{
	
	long long int n , i , j, sumD , numD , Fn = 0 ;
	
	scanf( "%lld" , &n ) ;

	for( i = 1 ; i <= n ; ++i ) //Iterating from 1 to n
	{
		sumD = 0 ;

		numD = 0 ;

		for( j = i ; j > 0 ; j /= 10 )
			
			sumD += j % 10;	//Calculating sumD= sum of digits


		for( j = 1 ; j <= i ; ++j )

			if( j % sumD == 0 )	

				++numD ;	

		Fn += numD ;


	}

	printf( "%lld" , Fn ); //Printing final answer

}