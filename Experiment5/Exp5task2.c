/*Aim-WAP to find the factorial of a number
 using recursive function */
/*Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/

#include<stdio.h>
// Function to calculate factorial using recursion
int FactorialIterative(int num){
int prod = 1;
for (int i = 1; i <=num; i++){
    prod *=i;

}
return prod;
}
int main (){
int num ;
printf("\t\t\t*** Iterative Factorial Function *** \n\n");
printf("Enter Number :");
scanf("%d",&num);
// Take the value from user
// Calculate the factorial
printf("Factorial of %d is %d ",num , FactorialIterative (num));
// Print the result
return 0 ;
}
/*OUTPUT -             *** Iterative Factorial Function ***

Enter Number :6
Factorial of 6 is 720
Process returned 0 (0x0)   execution time : 3.838 s
Press any key to continue.*/
