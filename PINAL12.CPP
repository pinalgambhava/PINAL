#include <stdio.h>
int main()
{
int kgs,grams;
printf("enter kgs: ");
scanf("%d", &kgs);
grams=kgs*1000;
printf("%d kgs is %d grams\n",kgs,grams);
return 0;
}