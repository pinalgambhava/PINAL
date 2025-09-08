#include <stdio.h>
int main()
{
int n,i,num, sum=0, mean;
printf("enter how many values: ");
scanf("%d" , &n);
printf("enter %d values:\n",n);
for(i=1; i<=n; i++)
{
printf("values %d: ", i);
scanf("%d" , &num);
sum += num;
}
mean = sum/n;
printf("sum = %d\n" , sum);
printf("mean = %d\n" ,mean);
return 0;
}