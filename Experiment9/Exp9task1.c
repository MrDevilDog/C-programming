#include<stdio.h>
#include<string.h>
/*Aim-Design a structure record to contain
name,roll no,and total marks obtained .Write a program to read
5 students data from the user and then display the topper
on the screen.
Name=Harshit Mishra
UIN=241A050
Roll no=41
Div=A
Branch=AIDS*/

//Defining structure to hold student data
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};
// Function to read student data
void input_student_data(struct student_record students[],int n) {
    for (int i=0; i<n; i++) {
        printf("Enter details for student %d:\n",i+1);
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("Roll Number:");
        scanf("%d",&students[i].roll_number);
        printf("Total Marks :");
        scanf("%f",&students[i].total_marks);
    }
}
//Function to find and return index of
int find_topper(struct student_record students[],int n) {
    int topper_index = 0;
    for(int i = 1; i < n; i++){
            if(students[i].total_marks > students[topper_index].total_marks){
                topper_index=i;
            }
    }
return topper_index;
}

int main() {
    int n=5;  //Number of students
    struct student_record students[n];

    printf("\t\t *** Topper Finder *** \n\n");

    //input student data
    input_student_data(students, n);
    //Find the topper
    int topper_index = find_topper(students, n);
    //Display topper details
    printf("\nTopper Details:\n");
    printf("Name : %s\n",students[topper_index].name);
    printf("Roll Number : %d\n",students[topper_index].roll_number);
    printf("Total Marks : %.2f\n",students[topper_index].total_marks);
    return 0;
}

