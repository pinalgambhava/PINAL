#include <stdio.h>
#include <math.h>
int main()
{
int num,original,digit,sum=0;
printf("enter a number: ");
scanf("%d", &num);
original=num;
if(num<0)
{
printf("negative numbers are not armstrong numbers.\n");
return 0;
}
while(num>0)
{
digit=num%10;
sum +=digit*digit*digit;
num =num/10;
}
if(sum ==original)
{
printf("%d is an armstrong number.\n" , original);
}
else
{
printf("%d is not an armstrong number.\n",original);
}
return 0;
}