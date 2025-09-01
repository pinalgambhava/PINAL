#include <stdio.h>
#include <conio.h>
void main()
{
int num;
printf("enter a number; ");
scanf("%d", &num);
if (num %7==0)
printf("\n%d is divisible by 7" ,num);
else printf("\n%d is not divisible by 7" ,num);
getch();
}