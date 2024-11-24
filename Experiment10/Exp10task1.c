/*Aim-write a program in c language to find the sum of
two numbers using pointers
Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS */
#include <stdio.h>

// Function to find the sum of two numbers using pointers
int main() {
    int num1, num2, sum;
    int *ptr1 , *ptr2;
    printf("\t\t ***Addition using pointers ***\n\n");
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Assign the addresses of num1 and num2 to the pointers
    ptr1 = &num1;
    ptr2 = &num2;


    sum=*ptr1+*ptr2;
    // Display the result
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
/*OUTPUT-   ***Addition using pointers ***

Enter first number: 34
Enter second number: 45
Sum of 34 and 45 is 79

Process returned 0 (0x0)   execution time : 7.583 s
Press any key to continue.
*/
