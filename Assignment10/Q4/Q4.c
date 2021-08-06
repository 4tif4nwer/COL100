#include <stdio.h>

int x;


int Ternary(int a[100], int l, int r)
{
	int i , j;

	i = l+(r-l)/3; //mid1
	j = l + 2*(r-l)/3; //mid2

	if(x==a[i]||x==a[j]) //Found
		return 1;
	else if(r - l < 2) //Not found
		return -1;

	if(x<a[i])
		return Ternary(a,l,i); //Left most subarray

	else if(x<a[j])
		return Ternary(a,i,j); //Middle subarray
	
	else
		return Ternary(a,j,r);//Right most subarray

	

}
int main()

{
	int n,a[100] ;
	
	scanf("%d" , &n ); 


	for(int i = 0 ; i < n ; ++i )

		scanf("%d" , &a[i] );

	scanf("%d",&x);

	int ans = Ternary(a,0,n);

	printf("%d",ans);
		
}