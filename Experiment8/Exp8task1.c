/*Aim : WAP to find the length of a string without using library function.
/*Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/
#include<stdio.h>
int main()
{
    char str[100];  //character string of size 100
    int length=0;   //variable
    printf("\t\t*** String Length Finder ***\n\n\n");
    printf("Enter Your String : "); //Input String from user
    gets(str);

    while(str[length] !='\0')  //'\0' means end of sring
    {
        length++;

    }

    printf("string length: %d Characters",length);
    return 0;
}
/*OUTPUT-   *** String Length Finder ***


Enter Your String : hsrsg
string length: 5 Characters
Process returned 0 (0x0)   execution time : 4.666 s
Press any key to continue..*/
