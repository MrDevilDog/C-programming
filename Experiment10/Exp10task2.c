/*Aim-WAP to print the elements of an array in
Reverse order using pointers.
Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/

#include <stdio.h>

// Function to print the elements of an array in reverse order


int main() {
    int n;
    printf("\t\t***Array Reverser***\n\n");
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr=arr;
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d:",i);
        scanf("%d", ptr+i);
    }

    // Print the elements in reverse order
    printf("\nArray elements in reverse order are:\n");
    for (int i = n-1; i >=0 ; i--) {
        printf("%d ", *(ptr+i));
    }
    printf("\n");

    return 0;
}
/*OUTPUT-     ***Array Reverser***

Enter the size of the array: 3
Enter the elements of the array:
0:11
1:22
2:3

Array elements in reverse order are:
3 22 11

Process returned 0 (0x0)   execution time : 9.269 s
Press any key to continue.
*/
