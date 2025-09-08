#include <stdio.h>
int main()
{
int n,i;
int a=1,b=1,c;
printf("enter how many numbers you want in fibonacci series:\n");
scanf("%d" , &n);
if (n <=0)
{
printf("please enter a positive integer:\n");
return 0;
}
printf("fibonacci series:\n");
if(n==1)
{
printf("1\n");
}
else
{
printf("1 1");
for(i=3; i <=n; i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
printf("\n");
}
return 0;
}
