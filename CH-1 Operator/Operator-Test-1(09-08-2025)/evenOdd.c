/*Question: Check_Even_Odd
Problem Statement

Write a C program to check whether a given number is even or odd.

You are not allowed to use any control flow statements (if, else, switch, loops) or ternary operators.

Input Format

A single integer input.

Output Format

Print "Even" if the number is even.

Print "Odd" if the number is odd.

Examples

Input: 10
Output: Even

Input: 7
Output: Odd

Input: -4
Output: Even

Input: -9
Output: Odd

*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    (n%2==0)&&printf("%d is even number",n) || printf("%d is odd number",n);


    return 0;
}