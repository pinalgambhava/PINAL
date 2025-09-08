#include <stdio.h>
int main()
{
int num,digit;
printf("enter a number: ");
scanf("%d", &num);
printf("digitd seperated; ");
while(num>0)
{
digit=num%10;
printf("%d", digit);
num=num/10;
if(num>0)
{
printf(",");
}
}
printf("\n");
return 0;
}