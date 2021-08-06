#include<stdio.h>

int main()
{
	double a , b , ans , pi = 3.14159265;// a and b are the required parameters to find area

	char choice;

	int f = 1;

	scanf("%c" , &choice);

	switch(choice)
	{
		case 'C': //Circle
		
		scanf("%lf" , &a); //Here, a is the radius
		
		ans = pi * a * a ;

		break;


		case 'R':  //Rectangle

		scanf("%lf %lf" , &a , &b ); // a and b are length and breadth

		ans = a * b;

		break;


		case 'T':  //Triangle

		scanf("%lf %lf" , &a , &b ); // a and b are base and hieght length.

		ans = 0.5 * a * b;

		break;


		default :

		printf("Invalid Input");

		f = 0;



		break;

	}

	if(f)
	{
	
		printf("The area is %0.2lf" , ans );

	}
}
