/*
Ques - 3
---------------
Write a program that calculates the grade of a student based on the marks entered by the user. Use the conditional (ternary) operator to determine the grade:

90 and above: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
Below 60: Grade F*/

#include<stdio.h>
int main(){

    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);

    (marks >= 90) ? printf("Grade A") : (marks >= 80) && (marks <= 89) ? printf("Grade B") : (marks >= 70) && (marks <= 79) ? printf("Grade C") : (marks >= 60) && (marks <= 69) ? printf("Grade D") : printf("Grade F");
    

    return 0;
}