#include<stdio.h>
int main()
{
	double l , w , h , rc , hc , rs; 
	
	/*
	Parameters of cuboid : Length = l, Width = w , Height = h
	Parameters of cylinder : Radius = rc, Height = hc
	Parameters of sphere : Radius = rs
	*/

	double pi = 3.14159265; //pi value to calculate volume of cylinder and sphere
	
	scanf( "%lf %lf %lf %lf %lf %lf" , &l , &w , &h , &rc , &hc , &rs ) ;

	printf( "%0.2lf \n", l * w * h ) ;// Volume of cuboid

	printf( "%0.2lf \n" , pi * rc * rc * hc ) ; //Volume of cylinder

	printf( "%0.2lf \n" , ( 4* pi * rs * rs * rs ) / 3); //Volume of sphere

	return 0;
}