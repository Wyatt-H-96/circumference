/*
finding circumference of a circle from users input
*/
#include<stdio.h>
#define PI 3.14159

int main()
{
double radius = 0.0, circumference = 0.0;
printf("What is the radius: ");
scanf("%lf" , &radius);
circumference = 2 * PI * radius;
printf("circumference equals %lf\n", circumference , radius);
return 0;


}