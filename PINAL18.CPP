#include <stdio.h>
void main()
{
float length,breadth,area,perimeter;
printf("enter the length of the rectangle:\n");
scanf("%f", &length);
printf("enter the breadth of the  rectangle:\n");
scanf("%f", &breadth);
area=length*breadth;
perimeter=2*(length+breadth);
printf("area of the rectangle: %0.2f\n", area);
printf("perimeter of the rectangle: %0.2f\n", perimeter);
}