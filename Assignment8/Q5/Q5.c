#include <stdio.h>
#include<stdbool.h>

bool isPangram(char s[])
{
	bool letters[26];
	
	for( int i = 0 ; s[i] != '\0' ; ++i)
	{
		letters[s[i]-'a'] = 1;
	}

	for( int i = 0 ; i <26 ; ++i )
	{
		if(!letters[i])
			return 0;
	}

	return 1;
}
int main()

{
	char a[100];

	scanf("%[^\n]%*c" , a);

	if(isPangram(a))

		printf("true");

	else

		printf("false");
		
}