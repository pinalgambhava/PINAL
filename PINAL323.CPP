#include <stdio.h>
int main()
{
int num,sum=0, digits;
printf("enter a number: ");
scanf("%d" , &num);
if (num<0)
{
num = -num;
}
while(num>0)
{
digits=num%10;
sum +=digits;
num = num/10;
}
printf("sum of digitd: %d\n", sum);
return 0;
}