#include <stdio.h>

int main()
{
	long long int n , i , words = 1;

	scanf("%lld\n" , &n );

	char a[n+1];

	scanf("%[^\n]%*c", a);

	for( i = 0 ; a[i]!='\0' ; ++i )
	{		
		if(a[i] == ' ')
		{
			++words;
		}
	}

	printf("%d\n" , words);

	return 0;
}