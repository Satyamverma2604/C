/*Question 1.

CalculateGrades

[Title:- Determine Student Grade Based on Total Marks] 
-------------------------------------------------------
Write a program that takes the marks of five subjects as input (each subject mark should be between 0 and 100). The program should:

Check if all marks are within the range of 0–100. If any marks are invalid, display an error message and exit.
If any subject mark is below 35, directly display "Fail" without calculating the total or grade.
Otherwise, calculate the total marks, percentage, and determine the grade using the following criteria:

-> 90%–100%: Grade A
-> 75%–89%: Grade B
-> 50%–74%: Grade C
-> 35%–49%: Grade D
-> Below 35%: Fail

Test Cases-1 :-
---------------
Input:
------
Subject 1: 95
Subject 2: 89
Subject 3: 88
Subject 4: 92
Subject 5: 91

Output:
-------
Total Marks: 455
Percentage: 91.0%
Grade: A (Valid)

Test Cases-2 :-
---------------
Input:
------
Subject 1: 85
Subject 2: 90
Subject 3: 110
Subject 4: 88
Subject 5: 92

Output:
-------
"Invalid input. Marks for each subject must be between 0 and 100." (Invalid)

Test Cases-3 :-
----------------
Input:
------
Subject 1: 20
Subject 2: 25
Subject 3: 30
Subject 4: 35
Subject 5: 40

Output:
--------
"Fail" (Valid)

Test Cases-4 :-
----------------
Input:
------
Subject 1: 40
Subject 2: 50
Subject 3: 34
Subject 4: 60
Subject 5: 70

Output:
--------
"Fail" (Valid - One subject is below 35)

*/


#include<stdio.h>
int main(){

    int a,b,c,d,e,total;float percentage;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if((a<0 && a>100) && (b<0 && b>100) && (c<0 && c>100) && (d<0 && d>100) && (e<0 && e>100) )
    printf("(Invalid!)Marks for each subject must be between 0 and 100.");
    else if(a>=35 && b>=35 && c>=35 && d>=35 && e>=35 ){
        printf("Total Marks: %d\n",total = (a+b+c+d+e));
        printf("Percentage: %.2f%%\n",percentage = total/(float)5);
        if(percentage>=90)
            printf("Grade: A");
        else if(percentage >= 75)
            printf("Grade: B");
        else if(percentage >= 50)
            printf("Grade: C");
        else
        printf("Grade D");
    }else{
        printf("Fail");
    }


    return 0;
}
