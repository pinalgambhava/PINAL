#include <stdio.h>
int main()
{
int i,j,sum=0;
for(i=2; i<=500; i++)
{
for(j=2; j<=i/2; j++)
{
if(i%j ==0)
{
break;
}
}
if(j>i/2)
{
sum +=i;
}
}
printf("summation of prime numbers between 1 and 500 is: %d\n", sum);
return 0;
}