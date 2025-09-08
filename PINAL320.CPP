#include <stdio.h>
int main()
{
int i, sum=0;
for(i=1; i<=100; i++)
{
if(i%3==0)
{
sum +=i;
}
}
printf("sum of integers divisible by 3from 1 to 100 is: %d\n", sum);
return 0;
}