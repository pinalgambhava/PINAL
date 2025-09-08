#include <stdio.h>
int main()
{ int n,sum=0,i;
printf("enter how many odd numbers: ");
scanf("%d" ,&n);
printf("the first %d odd numbers are:\n" ,n);
for(i=1; i<=n; i++)
{
printf("%d" , 2*i-1);
sum  += 2*i-1;
}
printf("\nsum=%d" ,sum);
return 0;
}