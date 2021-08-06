#include <stdio.h>
#include<ctype.h>

void encrypt(char a[] , unsigned int k )
{
	for( int i = 0 ; a[i] != '\0' ; ++i)
	{
		if(isalpha(a[i]))
		{
			if(a[i] >= 'a')

				a[i] = 'a' + ((a[i]-'a') + k) % 26;

			else 
				a[i] = 'A' + ((a[i]-'A') + k) % 26;
		}
	}
}

void decrypt(char a[] , unsigned int k )
{
	for( int i = 0 ; a[i] != '\0' ; ++i)
	{
		if(isalpha(a[i]))
		{
			if(a[i] >= 'a')

				a[i] = 'a' + ((a[i]-'a') + 26 - k) % 26;

			else 
				a[i] = 'A' + ((a[i]-'A') + 26 - k) % 26;
		}
	}
}
int main()

{
	char a[100];

	unsigned int k;

	scanf("%s%d" , a , &k );

	encrypt(a,k);

	printf("%s\n", a);

	decrypt(a,k);


	printf("%s\n", a);

	
		
}