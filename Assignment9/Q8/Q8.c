#include <stdio.h>
#include<stdlib.h>

void cofmat(int M[10][10],int t[10][10],int a, int b,int n)	// To build a cofactor matrix by removing row a and column b
{
	int i,j,i1,i2;
	for(i=0,i1=0;i<n;++i)
		{	
			if(i == a)
				++i;
			for(j=0,i2=0;j<n;++j)
			{
				if(j==b)
					++j;
				t[i1][i2++] = M[i][j];
			}
			i1++;


		}
}
void display(float mat[10][10], int n) // To display the matrix
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%g ", mat[i][j]);
        printf("\n");
    }
}
void transpose(float m[10][10],int n) // To transpose a matrix
{
	int i,j;
	float f;
	for( i = 0 ; i < n ; ++i )

		for( j = i+1 ; j < n ; ++j )

			{
				f = m[i][j];
				m[i][j] = m[j][i];
				m[j][i]=f;
			}

}
int determinant(int a[10][10],int n) //Recursive function to find determinant
{
	
	if(n == 1)
		return a[0][0];
	int t[10][10];

	int  j = 1,i;

	int det=0;

	for(i = 0; i<n;++i)
	{
		cofmat(a,t,0,i,n);
		det += j * a[ 0 ][ i ] * determinant( t , n-1 );

		j*=(-1);
	}

	return det;


}

int main()
{
	
	int n , i , j ;
	
	scanf( "%d", &n );

	int a[10][10],t[10][10];

	for( i = 0 ; i < n ; ++i )

		for( j = 0 ; j < n ; ++j )

			scanf( "%d" , &a[i][j] );

	int det = determinant(a,n);

	if(det == 0)
	{
		printf("Inverse does not exist\n");

		exit(0);
	}

	float inverse[10][10];

	int k = 1;

	for( i = 0 ; i < n ; ++i )
	{
		int z = k;

		for( j = 0 ; j < n ; ++j )
		{
			cofmat( a , t , i , j , n);
			inverse[i][j] = z * determinant(t,n-1);
			z*=(-1);
		}

		k*=(-1);

	}

	transpose(inverse,n); // Adjacent matrix

	for( i = 0 ; i < n ; ++i )

		for( j = 0 ; j < n ; ++j )

			inverse[i][j]/=det;

	display(inverse,n);

	
	
}