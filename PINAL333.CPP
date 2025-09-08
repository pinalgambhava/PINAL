#include <stdio.h>
int main()
{
int num,square,temp,digits=0,mod=1;
printf("enter a number:");
scanf("%d" ,&num);
square=num*num;
temp=num;
while (temp>0)
{
digits++;
temp=temp/10;
}
for(int i=0; i<digits; i++)
{
mod =mod*10;
}
if(square %mod ==num)
printf("%d is an automorphic number.\n",num);
else
printf("%d is not an automorphic number.\n",num);
return 0;
}