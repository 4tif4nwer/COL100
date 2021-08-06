#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int z = 0;	// z is 1 for negative number input (To skip the first character(-) of the string)

int myatoi(char A[], int length)
{
	
	if( length > z )
	{
		if(A[length - 1]>'9'||A[length -1]<'0')
		{
			printf("Invalid Input");
			exit(0);

		}
		return( (A[length-1]-'0') + 10*myatoi(A,length-1));
	}

	return 0;
}



int main()

{
	char a[100];

	int n ; 

	scanf("%d%s" ,&n,a);

	if(a[0]=='-')
		z = 1;
	int ans = myatoi(a,n);
	if(z)
	{
		if(ans==0)
		{
			printf("Invalid Input");
			exit(0);
		}
		ans= -ans;
	}

	printf("%d", ans);

	
		
}