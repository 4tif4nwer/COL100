#include<stdio.h>
#include<stdbool.h>

int main()
{
	double price , discount , tax , bill = 0;

	bool f=1; //This boolean will store the validity of given input
	
	for( int i = 0 ; i < 2 ; ++i ) //Two iterations for sweater and shoes
	{	
		scanf( "%lf %lf %lf" , &price , &discount , &tax );

		if( price > 0 && discount >= 0 && discount <= 100 && tax >= 0 && tax <= 100 )
		{
			price -= ( price * discount ) / 100; //Subtracting the discount from the initial price
			
			tax = ( price * tax ) / 100 ; //calculating the tax amount

			price += tax ; //Adding the tax to the discounted amount

			bill += price; // Adding the final price to the bill

		}
		else
			f=0; //If any one of the input is invalid, the boolean f changes to 0 

	}	

	if( f ) //Checks for validity of input
		printf( "%0.2lf" , bill );
	
	else
		printf("Invalid Input");

	return 0;

}