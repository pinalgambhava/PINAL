#include <stdio.h>
int main()
{
int i, num, sum=0,mean;
printf("enter 10 values:\n");
for(i=1; i<=10; i++)
{
printf("values %d: ", i);
scanf("%d" , &num);
sum += num;
}
mean = sum/10;
printf("sum = %d\n" , sum);
printf("mean = %d\n" ,mean);
return 0;
}