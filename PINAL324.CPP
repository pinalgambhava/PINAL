#include <stdio.h>
int main()  {
int num,reversed=0,digit;
printf("enter a number: ");
scanf("%d" , &num);
int original=num;
if(num<0)
{
num= -num;
}
while(num>0)
{
digit=num%10;
reversed=reversed*10 +digit;
num = num/10;
}
printf("reversed number: %d\n" , reversed);
return 0;
}