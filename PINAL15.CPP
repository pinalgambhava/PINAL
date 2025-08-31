#include <stdio.h>
int main()
{
int fahrenheit,celsius;
printf("enter the temperature in fahrenheit: ");
scanf("%d" , &fahrenheit);
celsius = (5.0/9.0)*(fahrenheit - 32);
printf("%d fahrenheit is %d celsius\n" ,fahrenheit,celsius);
return 0;
}