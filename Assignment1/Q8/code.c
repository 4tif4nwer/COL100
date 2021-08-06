#include <stdio.h>

int main()
{
	int time;

	scanf( "%d" , &time );

	if((time % 100) < 60 && (time / 100) < 24)
	{
		
		printf( "%d\n" , (time / 100) * 60 + (time % 100) );

	}

	else
		
		printf( "Invalid Input\n" );

	return 0;

}