#include <stdio.h>
int main()
{
int grams,kg;
printf("enter gram: ");
scanf("%d" ,&grams);
kg=grams/1000;
printf("%d grams is %d kg\n" ,grams,kg);
return 0;
}