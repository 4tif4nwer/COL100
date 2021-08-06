#include <stdio.h>
#include<stdlib.h>


void transpose(int m[10][10],int n)
{
	int i,j;
	int f;
	for( i = 0 ; i < n ; ++i )

		for( j = i+1 ; j < n ; ++j )

			{
				f = m[i][j];
				m[i][j] = m[j][i];
				m[j][i]=f;
			}

}
void reflect(int m[10][10],int n)
{
	int i,j,t;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n/2;++j)
			{
				t = m[i][j];
				m[i][j] = m[i][n-j-1];
				m[i][n-j-1]=t;
			}
	}
}
int main()
{
	
	int n , i , j ;
	
	scanf( "%d", &n );

	int a[10][10];

	for( i = 0 ; i < n ; ++i )

		for( j = 0 ; j < n ; ++j )

			scanf( "%d" , &a[i][j] );


	//Rotation = transpose -> reflect

	transpose(a,n);

	reflect(a,n);

	printf("\n");

	for( i = 0 ; i < n ; ++i )
	{

		for( j = 0 ; j < n ; ++j )

			printf("%d ",a[i][j]);
		
		printf("\n");

	}
	
	
}