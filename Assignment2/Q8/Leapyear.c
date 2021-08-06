#include <stdio.h>
#include<stdbool.h>

int main()

{
	int year;

	bool f = 0;

	scanf( "%d" , &year );

	if( year % 100 == 0 )
	{
		if( year % 400 == 0 )
			f=1;

	}

	else if ( year % 4 == 0 )
		f=1;

	if( f )
		printf("Leap year");

	else
		printf("Not a leap year\n");
	

	return 0;
}