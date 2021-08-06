#include<stdio.h>

int main()
{
	long long int n;
	
	scanf("%lld" , &n ); 

	long long int rev = 0;

	for( int i = n ; i > 0 ; i /= 10 )
	{
		rev = rev * 10 + i % 10;
	}
	if(rev == n)
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");

}