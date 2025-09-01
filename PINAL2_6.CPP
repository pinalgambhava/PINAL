#include <stdio.h>
#include <conio.h>
void main()
{
int m1,m2,m3 , total;
float avg;
printf("enter marks of 3 subjects:\n");
scanf("%d%d%d",&m1, &m2, &m3);
total= m1+m2+m3;
avg=total/3.0;
printf("\ntotal marks =%d" ,total);
printf("\naverage = %.2f" , avg);
if (m1<35 || m2<35|| m3<35)
{
printf("\nresult:fail (less than 35 in a subject)");
}
else
{
if (avg>=70)
printf("\n result: distinction");
else if(avg>=60)
printf("\nresult: first class");
else if (avg>=50)
printf("\nresult: second class");
else if (avg>=35)
printf("\nresult: third class");
else
printf("\nresult: fail");
}
getch();
}