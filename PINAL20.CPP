#include <stdio.h>
void main()
{
float height,length,area;
printf("enter the height of the triangle:\n");
scanf("%f", &height);
printf("enter the base of the triangle:\n");
scanf("%f", &length);
area=(height*length)/2;
printf("area of the triangle: %0.2f\n" ,area);
}