#include <stdio.h>
int main()
{
int num,reversed=0, original,digit;
printf("enter a number: ");
scanf("%d", &num);
original=num;
if(num<0)
{
num=-num;
original=num;
}
while(num>0)
{
digit=num%10;
reversed=reversed*1010 +digit;
num= num/10;
}
if(reversed==original)
{
printf("the number is a palindrome.\n");
}
else
{
printf("the number is not a palindrone.\n");
}
return 0;
}