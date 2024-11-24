/*Aim : WAP to check if the entered string is pallindrome or not.
Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/
#include<stdio.h>
int main()
{
    char str[100]; //character string of size 100
    int i;
    printf("\t\t\t*** Pallindrome Finder ***\n\n\n");

    printf("\n Enter Your String : "); //Input String from user
    gets(str);

for(i = 0; i < strlen(str) - 1; i++)
    {
        if(str[i] != str[strlen(str) - 1 - i])
        {
            printf("The String is NOT a Palindrome");
            return 0;
        }
    }
 printf("\n The String is Pallindrome.");

 return 0;
}
/*OUTPUT-   *** Pallindrome Finder ***



 Enter Your String : hfghfh
The String is NOT a Palindrome
Process returned 0 (0x0)   execution time : 6.297 s
Press any key to continue. */
