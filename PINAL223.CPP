      #include <stdio.h>
      #include <conio.h>
      void main()
      {
      int sub1,sub2,sub3,total;
      float average;
      printf("enter the marks of sub1:");
      scanf("%d",&sub1);
      printf("enter the marks of sub2:");
      scanf("%d",&sub2);
      printf("enter the marks of sub3:");
      scanf("%d",&sub3);
      total=sub1+sub2+sub3;
      average=total/3;
      printf("total marks=%d\n",total);
      printf("average marks=%2f\n",average);
      getch();
      }