/*AIM:WAP to get students PCM marks from the user and find the average.Use conditional operator to print 5 if
the student is eligible for admission .
Eligibility criteria is 50 % in PCM*/
/*Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/
#include<stdio.h>
int main()
{
  int P,C,M,d,Avg;
printf("Enter Physics Marks ");
scanf("%d",&P);
printf("Enter Chemistry Marks ");
scanf("%d",&C);
printf("Enter Maths Marks ");
scanf("%d",&M);
d=P+C+M;
Avg=d/3;
printf("Avg=%d",Avg);
Avg>=50?printf("You are eligible for admission "):printf("You are Not eligible for admission ");
return 0;
}
/*OUTPUT:Enter Physics Marks 69
Enter Chemistry Marks 69
Enter Maths Marks 69'
Avg=69You are eligible for admission
Process returned 0 (0x0)   execution time : 5.964 s
Press any key to continue.*/
