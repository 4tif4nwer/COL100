#include <stdio.h>
#include<stdbool.h>

int maxProfit(int prices[], int n) 
{
	int i , j = prices[0] , profit =0;

	for(  i = 1;i<n;++i)
	{
		if(prices[i]<j)
			j=prices[i];
		
		else if(profit< prices[i]-j)

			profit = prices[i] - j;
			
	}

	return profit;

}

int main()

{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(  i = 1;i<n;++i)
		scanf("%d",&a[i]);
	
	printf("%d",maxProfit(a,n));

		
}