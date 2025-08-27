/*
Question 3.


Factorial Calculation
[Title:- Factorial Calculation] [for-loop]
------------------------------------------

Write a C program to calculate the factorial of a given positive integer.
The program should prompt the user to enter a number, compute its factorial, and display the result.

-> If the user enters a negative number, the program should display an error message: "Invalid input. Please enter a positive integer."
-> If the input is 0, the program should print: "Factorial of 0 = 1," because by definition, 0! = 1.

|-----------------------------------|
|Formula: n! = 1 × 2 × 3 × ... × n. |
|-----------------------------------|

Valid Test Cases :-
-------------------
Test-Case-1 :-
--------------
Input: 5
Output: Factorial of 5 = 120

Test-Case-2 :-
---------------
Input: 3
Output: Factorial of 3 = 6

Test-Case-3 :-
---------------
Input: 0
Output: Factorial of 0 = 1

Invalid Test Cases :-
---------------------
Test-Case-4 :- (Negative Input)
-------------------------------
Input: -4
Output: Invalid input. Please enter a positive integer.

Sample Input
3
Sample Output
Factorial of 3 = 6
*/




#include<stdio.h>
int main(){

    int n,fact=1;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input Please enter a positive integer.");
        return 0;
    }
    printf("Factorial of %d = ",n);
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("%d",fact);


    return 0;
}