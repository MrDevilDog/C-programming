/*Aim: WAP to print if entered number is even or odd.*/
/*Name=Harshit Mishra  
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/
#include<stdio.h>
int main()
{
printf("***Even Odd Finder***");
int n;
printf("\nEnter the number:");
scanf("%d",&n);
//Take the Input from user 
printf("\nEntered number is %d",n);
//Condition 
if(n%2==0)
{
printf("\nEntered number is even");
}
else
printf("\nEntered number is odd");
return 0;
}
/* ***Even Odd Finder***
Enter the number:12
Entered number is 12
Entered number is even*/
/****Even Odd Finder***
Enter the number:9
Entered number is 9
Entered number is odd
Process returned 0 (0x0)   execution time : 4.659 s
Press any key to continue.*/
