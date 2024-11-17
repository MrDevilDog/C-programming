/*Aim- WAP to define a counter function to print how many
times the function is called use storage classes.*/
/*Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/
#include <stdio.h>
void counter(){

    static int count=0;  // static variable to keep track of the count
    count++;
    printf("Counter Function Called : %d\n",count);
}

int main(){
    // Calling the counter function multiple times
        printf("\t\t\t*** Storage Class*** \n\n");
        int i=0;
        for(i=1;i<=41;i++)
            {
                counter();
            }
        return 0;
}
/*OUTPUT -    *** Storage Class***

Counter Function Called : 1
Counter Function Called : 2
Counter Function Called : 3
Counter Function Called : 4
Counter Function Called : 5
Counter Function Called : 6
Counter Function Called : 7
Counter Function Called : 8
Counter Function Called : 9
Counter Function Called : 10
Counter Function Called : 11
Counter Function Called : 12
Counter Function Called : 13
Counter Function Called : 14
Counter Function Called : 15
Counter Function Called : 16
Counter Function Called : 17
Counter Function Called : 18
Counter Function Called : 19
Counter Function Called : 20
Counter Function Called : 21
Counter Function Called : 22
Counter Function Called : 23
Counter Function Called : 24
Counter Function Called : 25
Counter Function Called : 26
Counter Function Called : 27
Counter Function Called : 28
Counter Function Called : 29
Counter Function Called : 30
Counter Function Called : 31
Counter Function Called : 32
Counter Function Called : 33
Counter Function Called : 34
Counter Function Called : 35
Counter Function Called : 36
Counter Function Called : 37
Counter Function Called : 38
Counter Function Called : 39
Counter Function Called : 40
Counter Function Called : 41

Process returned 0 (0x0)   execution time : 0.029 s
Press any key to continue.
