#include <stdio.h>

int main()
{
	long long int a , b , i , j , count = 0 , tp1 , tp2 , temp ;

	scanf( "%lld%lld" , &a , &b ) ;

	for( j = a ; j <= b ; ++j )
	{
		for( i = a ; i <= j ; ++i )
			{
				tp1 = i ;	//Temporary variables to calculate GCD of i and j

				tp2 = j ;
				
				for( ; tp2 % tp1 != 0 ; )		//Finding GCD of i and j and storing it in tp1
					{
						temp = tp1;

						tp1 = tp2 % tp1;

						tp2=temp;
						
					}
				if( tp1 > 1 )	//Counting pairs with GCD > 1
					++count;
				
			}
	}

	printf( "%lld" , count ) ;
	
	        
}


