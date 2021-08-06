#include<stdio.h>

int main()
{
	int x , f = 1 , valid = 1 ;

	scanf( "%d" , &x ) ; 
	
	if( x % 10 == 0)
		valid = 0 ; //The integer valid will indicte the validity of the reverse. If the last digit/digits are zero, then the reverse will be invalid.
	
	for( ; x > 0 ; x /= 10 ) // Iterating through the number and removing the last digit every time
	{
		if( x % 10 == 0 && f == 1 ) // f will store the value 1 till we obtain a non zero digit from the end
		{
			continue ; //The zeroes at the end of x will not be printed in the reverse.

		}

		else
		{
			printf( "%d" , x%10 ) ;
			f = 0 ;
		}
	
	}
	
	if( valid == 0 ) 
		printf( "\nInvalid\n" );
	
	else
		printf( "\nValid\n" );


return 0;	
}