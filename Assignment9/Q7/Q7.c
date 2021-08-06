#include <stdio.h>
#include<stdbool.h>


bool candygame(int n)
{
	
	if(n==42)
		return 1;

	if(n<42)
		return 0;

	bool ans=0;

	if(n%2==0) //If is is a multiple of 2
		ans |= candygame(n/2);
	
	if(n%3==0||n%4==0) //If is is a multiple of 3 or 4
	{
		int j = (n%10)*((n%100)/10);
		if(j)
		ans |=candygame(n - j);
	}
	if(n%5==0) //If is is a multiple of 5
	{
		ans|=candygame(n-42);
	}
	return ans;
} 
int main()

{
	int n;
	
	scanf( "%d", &n );

	if(candygame(n))
		printf("True");

	else
		printf("False");
}