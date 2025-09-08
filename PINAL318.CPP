#include <stdio.h>
int main()
{
int i,boys=0,girls=0;
char gender;
for (i=1; i<=50; i++)
{
printf("enter gender of student (b/g)");
scanf("%c" ,&gender);
if (gender=='b')
boys++;
else if (gender=='g')
girls++;
}
{
printf("no of boys=%d\n",boys);
printf("no of girls=%d\n",girls);
}
return 0;
}