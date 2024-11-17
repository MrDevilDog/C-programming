/*Aim-WAP to find all the prime numbers
between two numbers using functions.*/
/*Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/

#include<stdio.h>
// Function to check if a number is prime
int isprimenumber(int num);

int isPrimeNumber(int num)
{int i;
    for( i=2;i< num;i++){
    if(num%i ==0){
        return 0;
    }

  }
  return 1;
  }
 // Function to print all prime numbers between two numbers

  int main(){
   int start_num,end_num,i;
   printf("\t\t\t *** Prime Number Finder *** \n\n ");
   printf("Enter Starting Number :");
   scanf("%d",&start_num);
   printf("Enter Ending Number :");
   scanf("%d",&end_num);

   i = start_num<=1?2:start_num ;
   printf("Prime Numbers between %d and %d :",start_num,end_num) ;
   while(i <= end_num){
        if(isPrimeNumber(i)){
        printf("%d,",i) ;
  //Print the OUTPUT
         }
 i++;
   }
   return  0 ;
}
/*OUTPUT-  *** Prime Number Finder ***

 Enter Starting Number :2
Enter Ending Number :10
Prime Numbers between 2 and 10 :2,3,5,7,
Process returned 0 (0x0)   execution time : 7.919 s
Press any key to continue.*/
