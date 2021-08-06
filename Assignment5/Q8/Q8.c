#include <stdio.h>

int main()
{
	long long int n , lar = 0, slar = 0 , i  ; // lar is for largest and slar for second largest

	scanf("%lld" , &n );

	for( ; n > 0 ; --n ) //Accepting iput of n numbers
	{
		scanf("%lld" , &i );

		if( i > lar)
		{
			slar = lar;

			lar = i;
		}

		else if(i > slar && i != lar)
		{

			slar = i;

		}
	}

	if(slar == 0)
		printf("Second largest number does not exist.\n" );

	else
		printf("%lld\n", slar );
	
}