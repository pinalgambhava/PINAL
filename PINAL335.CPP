#include <stdio.h>
int main()
{
int i,j;
//part(a)
printf("(a)\n");
for(i=1; i<=3; i++)
{
for(j=1; j<=2; j++)
{
printf("%d",j);
}
printf("\n");
}
printf("\n");

//part(b)
printf("(b)\n");
for(i=1; i<=3; i++)
{
for(j=1; j<=2; j++)
{
printf("%d" , i);
}
printf("\n");
}
printf("\n");

//part(c)
 printf("(c)\n");
for(i=1; i<=3; i++)
{
for(j=1; j<=3; j++)
{
printf("%d" , i);
}
printf("\n");
}
printf("\n");

//part(d)
printf("(d)\n");
int k=5;
for(i=1; i<=3; i++)
{
printf("%d",k--);
for(j=1; j<=2; j++)
{
printf("%d" , i);
}
printf("\n");
}
return 0;
}