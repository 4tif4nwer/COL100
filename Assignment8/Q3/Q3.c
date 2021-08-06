#include <stdio.h>

void toLowerCase(char s[])
{
	for( int i = 0 ; s[i] != '\0' ; ++i)
	{
		if(s[i]>='A'&&s[i]<='Z')
			s[i]+=32;
	}
}
int main()

{
	char a[100];

	scanf("%[^\n]%*c" , a);

	toLowerCase(a);	

	printf("%s" , a);
		
}