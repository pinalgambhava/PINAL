#include <stdio.h>
int main()
{
int celsius,fahrenheit;
printf("enter temperature in celsius: ");
scanf("%d" , &celsius);
fahrenheit = (9.0/5.0 * celsius) +32;
printf("%d fahrenheit is %d celsius\n" ,celsius,fahrenheit);
return 0;
}