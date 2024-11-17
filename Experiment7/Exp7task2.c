/*Aim-WAP to calculate sum of two matrix */

/*Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/
#include <stdio.h>

void main() {
    int arr1[50][50], brr1[50][50], crr1[50][50], i, j, n;

    printf("\n\nAddition of two Matrices :\n");
    printf("------------------------------\n");
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    printf("Input elements in the first matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Input elements in the second matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &brr1[i][j]);
        }
    }
    //Formation of First Matrix
    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
    }
     //Formation of Second Matrix
    printf("\nThe Second matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", brr1[i][j]);
    }
    // Adding two matrices
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            crr1[i][j] = arr1[i][j] + brr1[i][j];
     // Printing the result
    printf("\nThe Addition of two matrix is : \n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", crr1[i][j]);
    }
    printf("\n\n");
}
/*OUTPUT -
Addition of two Matrices :
------------------------------
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 4
element - [0],[1] : 3
element - [1],[0] : 2
element - [1],[1] : 1

The First matrix is :

1       2
3       4
The Second matrix is :

4       3
2       1
The Addition of two matrix is :

5       5
5       5


Process returned 0 (0x0)   execution time : 11.499 s
Press any key to continue.*/

