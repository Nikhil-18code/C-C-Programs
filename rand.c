/*Conversion of cartesian coordinates (x,y) into polar coordinates (r,THETA) */
#include<stdio.h>
#include<math.h>  /* for sqrt() and pow() */
int main()
{
	float x, y, r, theta;
	printf("\nEnter the values of x and y = ");
	scanf("%f %f", &x, &y);
	r =sqrt((x * x) + (y * y));
	theta = atan(y/x);
	theta = theta * (180.0 / 3.14); // convert into degrees
	printf("The value of r is = %f\nand the value of theta is = %f\n", r, theta); 
	return 0;
	}