/*Aim:WAP to find the sum of all the odd numbers between numbers entered by the user
 Name  :Harshit Mishra  
 UIN   :241A050
 Roll  :41
 DIV   :A
 Branch:AIDS*/
#include<stdio.h>
int main()
{
  // Input the range from the user
printf("\t\t\t***Sum of odd numbers ***\n\n\n");
int low_range,high_range,remainder,sum=0,odd_num;
printf("Enter the low end of the range \t:");
scanf("%d",&low_range);
printf("Enter the high end of the range\t:");
scanf("%d",&high_range);
 // Adjust start if it is even
if(low_range<high_range){
  // Calculate the sum of odd numbers
   for (odd_num=low_range ;odd_num<=high_range;odd_num++){
   remainder=odd_num%2;

   if(remainder!=0){
   sum=odd_num+sum;
   }
   }
   printf("The sum of all odd numbers in the given range of %d to %d is equal to :%d\n",low_range
   ,high_range,sum);
   }

else{
  printf("Invalid the low range must be greater than the high range ");
} // Output the result
return 0;
}
/*Output=                        ***Sum of odd numbers ***
Enter the low end of the range  :78
Enter the high end of the range :89
The sum of all odd numbers in the given range of 78 to 89 is equal to :504

Process returned 0 (0x0)   execution time : 3.998 s
Press any key to continue.*/

