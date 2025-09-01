#include <stdio.h>
#include <conio.h>
void main()
{
int a,b;
printf("enter two numbers: ");
scanf("%d%d" ,&a,&b);
if (a>b)
{
printf("largest=%d\n" ,a);
printf("smallest=%d\n" ,b);
}
else if (b>a)
{
printf("largest=%d\n" , b);
printf("smallest=%d\n" ,a);
}
else
{
printf("both numbers are equal: %d\n" ,a);
}
getch();
}