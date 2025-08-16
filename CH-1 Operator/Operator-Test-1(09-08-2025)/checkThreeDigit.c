/*Question 1.


Question: Check_Three_Digit
Problem Statement

Write a C program to check whether a given number is a three-digit number or not.

You are not allowed to use any control flow statements (if, else, switch, loops) or ternary operators.

Input Format

A single integer input.

Output Format

Print "It is a 3-digit number" if the input number is three digits.

Otherwise, print "It is not a 3-digit number".

Examples

Input: 123
Output: It is a 3-digit number

Input: 45
Output: It is not a 3-digit number

Input: 1000
Output: It is not a 3-digit number

Input: -567
Output: It is a 3-digit number

*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n = (n>=100 && n<=999) || (n>= -100 && n<= -999);
    n ? printf("It is Three digit number.") : printf("It is not Three digit number.");

    return 0;
}