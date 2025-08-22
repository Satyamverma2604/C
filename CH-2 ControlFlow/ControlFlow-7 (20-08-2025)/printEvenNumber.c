/*Question 3.


Print Even Numbers
[Title:- Print Even Numbers up to N]
-------------------------------------
Write a C program that takes an integer input N from the user and prints all even numbers up to N using a while (true) loop. The program should validate the input and terminate if the user enters zero or a negative value.

Test Cases :-
-------------

Test-Case-1 :-
--------------
Input: N = 8
Output: 2 4 6 8
Explanation: Prints all even numbers from 2 to 8.

Test-Case-2 :-
---------------
Input: N = 0
Output: Invalid input. Program terminated.
Explanation: Input is zero; program exits.

Test-Case-3 :-
--------------
Input: N = -5
Output: Invalid input. Program terminated.
Explanation: Negative value entered; program exits.
Sample Input
8
Sample Output
2 4 6 8

*/



#include<stdio.h>
int main(){

    int n,start=2;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input.");
        return 0;
    }

    printf("Even numbers up to %d are:",n);
    while(1){
        if(start>n)
        break;
        printf(" %d",start);
        start+=2;

    }

    return 0;
}