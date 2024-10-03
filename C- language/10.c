#include<stdio.h>

 struct students
 {
   int rno;
   char studentname[10];
   char studentclass[10];
 };
 void main()
 {
     struct students x;
     printf("Enter the roll number\n");
     scanf("%d",&x.rno);
     printf("Enter the name of student\n");
     scanf("%s",&x.studentname);
     printf("Enter the class of the student\n");
     scanf("%s",&x.studentclass);
     printf("Roll number:%d\t Student name:%s\t Student class:%s\t",x.rno,x.studentname,x.studentclass);
 }
