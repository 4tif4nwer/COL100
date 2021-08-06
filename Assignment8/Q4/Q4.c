#include <stdio.h>
#include<string.h>

void toLowerCase(char s[])
{
	for( int i = 0 ; s[i] != '\0' ; ++i)
	{
		if(s[i]>='A'&&s[i]<='Z')
			s[i]+=32;
	}
}

int isSubstring(char s1[], char s2[])
{
	toLowerCase(s1);

	toLowerCase(s2);

	int i , j , k = strlen(s2) , ans = -1 ;

	for( i = 0 ; s1[i] != '\0' ; ++i)
	{
		if(s1[i] == s2[0])
		{
			for(j = i + 1 ; s1[j]!='\0' && j - i < k ; ++j )
			{
				if(s1[j] != s2[j-i])
					break;
			}
			if(j - i == k)
				ans = i;
			
		}
	}

	return(ans);
}
int main()

{
	char a[100] , b[100];

	scanf("%s%s" , a , b);

	printf("%d" , isSubstring(a,b));
		
}