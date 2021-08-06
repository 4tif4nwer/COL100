#include<stdio.h>

int main()
{
	int num , power , ans;

	scanf("%d %d" , &num , &power );

	for( ans = 1 ; power > 0 ; --power)
		ans *= num;

	printf("%d" , ans);

	return 0;

}