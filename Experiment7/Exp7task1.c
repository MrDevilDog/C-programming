/*Aim-WAP to find the largest element in an array*/

/*Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/
#include <stdio.h>
int main ()
{
    int n,i,a[100],large;
    printf("Enter the number of elements :");
    scanf("%d",&n); //Take the number of input from the user
    for (i=0;i<=n-1;i++)
    {
        printf("Enter a value :");

        scanf("%d",&a[i]);//Take the value

    }


    large=a[0];
    for (i=1;i<=n-1;i++) //Condition
    {
        if(large<a[i])
         large=a[i] ;

    }
        printf("The largest number is %d",large );
        //Print the answer
        return 0;
}
/*OUTPUT -Enter the number of elements :3
Enter a value :56
Enter a value :67
Enter a value :78
The largest number is 78
Process returned 0 (0x0)   execution time : 10.386 s
Press any key to continue.*/
