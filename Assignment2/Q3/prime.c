#include <stdio.h>
#include<math.h>
#include<stdbool.h>

int main()
{
	int x;

	bool f=0;

	scanf("%d" , &x);

	for(int i = 2; i <= sqrt(x) ; ++i )
	{
		if( x % i == 0)
		{
			f=1;
			break;
		}

	}
	if(f)
		printf("Not a Prime Number");
	else
		printf("Is a Prime Number");


}