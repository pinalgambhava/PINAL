#include <stdio.h>
int main()
{
int i, sum=0;
printf("numbers divisible by 13 between 1 and 100:\n");
for(i=1; i<=100; i++)
{
if(i%13 ==0)
{
printf("%d" ,i);
sum += i;
}
}
printf("\nsum = %d" ,sum);
return 0;
}