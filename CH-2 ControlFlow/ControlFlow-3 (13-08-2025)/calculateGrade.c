/*Question 5.

CalculateGrades

Problem :-
-----------
You are tasked with writing a C program that determines the grade of a student based on their total marks. The total marks are out of 100. The grading system is as follows:

if percentage is 
-----------------
	-> 90 to 100: Grade A
	-> 80 to 89: Grade B
	-> 70 to 79: Grade C
	-> 60 to 69: Grade D
	-> Below 60: Grade F

Write a C program that takes the total marks as input and prints the corresponding grade using an if-else ladder.

Example Input :-
-----------------
Enter the total marks: 85

Example Output:
---------------
Grade B

Additional Test Cases:
----------------------

Test Case 1:
-------------
Input: 92
Output: Grade A

Test Case 2:
--------------
Input: 75
Output: Grade C

Test Case 3:
-------------
Input: 58
Output: Grade F
Sample Input
85
Sample Output
Grade B
*/

#include<stdio.h>
int main(){

 int marks;
 scanf("%d",&marks);
 if(marks<=100){

    if(marks>=90){
        printf("Grade A");
    }else if(marks>=80 && marks <= 89){
        printf("Grade B");
    }else if(marks>=70 && marks <= 79){
        printf("Grade C");
    }else if(marks>=60 && marks <= 69){
        printf("Grade D");
    }else{
        printf("Grade F");
    }
 }else{
    printf("Invalid marks entered.");
    }
    return 0;
    
}

optimized code



#include<stdio.h>
int main(){

 int marks;
 scanf("%d",&marks);
    if(marks < 0 || marks>100)
        printf("Invalid marks entered.");
    else if(marks>=90)
        printf("Grade A");
    else if(marks>=80)
        printf("Grade B");
    else if(marks>=70)
        printf("Grade C");
    else if(marks>=60)
        printf("Grade D");
    else
        printf("Grade F");
 
    
    
    return 0;
    
}

// mind blowing method 


#include <stdio.h>
int main() {
    int marks;
    scanf("%d", &marks);

    printf(marks < 0 || marks > 100 ? "Invalid marks entered." :
           marks >= 90 ? "Grade A" :
           marks >= 80 ? "Grade B" :
           marks >= 70 ? "Grade C" :
           marks >= 60 ? "Grade D" : "Grade F");

    return 0;
}

// another method

#include <stdio.h>
int main() {
    int marks;
    char *grades[] = {"Grade F", "Grade D", "Grade C", "Grade B", "Grade A"};
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks entered.");
    else
        printf("%s", grades[marks / 10 < 6 ? 0 : marks / 10 - 5]);

    return 0;
}