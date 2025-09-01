#include <stdio.h>
#include <conio.h>
void main()
{
float gross,discount,net;
printf("enter gross sales: ");
scanf("%f", &gross);
if(gross>20000)
discount=gross*0.15;
else if(gross>10000)
discount=gross*0.10;
else
discount=gross*0.05;
net=gross- discount;
printf("\ngross sales =%2f" ,gross);
printf("\ndiscount =%2f" ,discount);
printf("\nnet sales =%2f" ,net);
getch();
}