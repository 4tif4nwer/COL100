#include <stdio.h>
#include<string.h>

int a[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //Stores frequency of every alphabet in the array.

void possiblePal(char s[])
{
	

	int i , j , k = strlen(s);

	for(i=0;i<k;++i)
	{
		j = s[i]-'a';
		++a[j];
	}

	int f = k%2;	//If the string length is odd, only one alphabet should have odd frequency.

	for(i=0;i<26;++i)
	{
		if(a[i]%2 == 0)
		{
			continue;
		}
		else if(a[i]%2 && f)
		{
			f = 0;
		}
		else
			break;
	}
	if(i==26)
		printf("YES");
	else
		printf("NO");
	
}
int main()

{
	char a[100];

	scanf("%s" , a);

	possiblePal(a);
		
}