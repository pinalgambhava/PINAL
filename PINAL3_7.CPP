#include <stdio.h>
int main()
{ int n,sum=0,i;
printf("enter a natural number: ");
scanf("%d" ,&n);
for(i=1; i<=n; i++)
sum=sum+i;
printf("the sum of first %d natural numbers is: %d", n,sum);
return 0;
}