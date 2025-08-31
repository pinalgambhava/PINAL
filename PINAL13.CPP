#include <stdio.h>
int main()
{
int kb,mb,gb,bytes;
printf("enter the bytes: ");
scanf("%d" , &bytes);
kb=bytes/1024;
mb=bytes/(1024*1024);
gb=bytes/(1024*1024*1024);
printf("size in kb: %2d kb\n" ,kb);
printf("size in mb: %2d mb\n" ,mb);
printf("size in gb: %2d gb\n"  ,gb);
return 0;
}
