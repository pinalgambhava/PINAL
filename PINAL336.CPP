#include <stdio.h>
int main()
{
int i,j;
//(a)
printf("(a)\n");
for(i=1; i<=5; i++)
{
for(j=1; j<=5; i++)
{
if(i==j)
printf("3");
else if(i+j==6)
printf("%d",(i<j) ?i:j);
else if(j==1)
printf("%d",i);
else if(j==5)
printf("%d",6-i);
else
printf(" ");
}
printf("\n");
}
printf("\n");
//(b)
printf("(b)\n);
for(i=1; i<=5; i++)
{
for(j=1; j<=5; j++)
{
if(i==1|| j==1)
printf("%d",(i>j)?i:j);
else if(i+j==6)
printf("%D",(i<j)? i:j);
else if(i==j)