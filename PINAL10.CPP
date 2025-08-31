#include <stdio.h>
#include <conio.h>

int main()
{
int dollars,rupees,pounds;
printf("enter thr amount in dollars: ");
scanf("%d" , &dollars);
rupees=dollars*48;
pounds=rupees/70;
printf("equivalent amount in pounds: %d\n" ,pounds);
return 0;
}