#include <stdio.h>
void main()
{
float side,area,perimeter;
printf("enter the length of the side of the square:\n");
scanf("%f", &side);
area=side*side;
perimeter=4*side;
printf("area of the square: %0.2f\n" , area);
printf("perimetr of the square: %0.2f\n", perimeter);
}