#include <stdio.h>

int main()

{
	long long int sec , size , i , j;

	
	scanf( "%lld%lld", &sec , &size ); //Number of sections and size of each section.

	printf( "*** CHRISTMAS TREE ***\n" );

	for( ; sec > 0 ; --sec ) //Looping to print all sections
	{
		for( i = 1 ; i <= size ; ++i ) //Rows of each section
		{
			for( j = 1 ; j <= 2 * size - 1 ; ++j )
			{
				
				if( j >= size + 1 - i && j < size +i) //To print pyramid centrally
					
					printf( "*" );
				
				else

					printf( " " );
			}

			printf("\n");
		
		}

	}

	for( i = 1 ; i <= size ; ++i ) //Printing tree trunk
	{
		
		for(j = 1 ; j <= 2 * size - 1 ; ++j )
		{
			
			if( j >=size - 1 && j <= size + 1)

				printf( "*" );

			else

				printf( " " );
		
		}
		
		printf( "\n" );
	}

	return 0;
		
}