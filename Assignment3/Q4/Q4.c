#include <stdio.h>

int main()
{
	double x , cosine = 1 , power = 1 , fact = 1 , pi = 3.14;
	
	int count; 
	scanf("%lf" , &x ); //Angle input in degrees
	if(x>90)
	{
		x=180-x;
		power = -1;
		cosine = -1;

	}
	x = ( x * pi )/180; //Converting to radians
	for(count = 2; count<=12 ; count +=2)
	{
		power *= ( x * x * (-1) );
		fact *= ( count * (count - 1) );
		cosine += power/fact;
	}

	printf("%0.3lf\n" , cosine );
}