#include <stdio.h>

int main()
{
	int sum = 0 , i , n;

	for(n=17;n<999;n+=17)
	{		
		if(n>100)
			sum += n;
	}
	
	printf("%d\n", sum );
}