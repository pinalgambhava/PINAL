#include <stdio.h>
int main()
{ int n,sum=0,i;
printf("enter how many even numbers: ");
scanf("%d" ,&n);
printf("the first %d evennumbers are:\n" ,n);
for(i=1; i<=n; i++)
{
printf("%d" , 2*i);
sum  += 2*i;
}
printf("\nsum=%d" ,sum);
return 0;
}