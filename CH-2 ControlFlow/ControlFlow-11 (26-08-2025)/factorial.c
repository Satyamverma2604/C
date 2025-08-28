/*
2) Factorial of a Number
 Question:
Write a program using a while loop to calculate the factorial of a given number n.
Example:
Input: 5 → 5! = 120

Test Cases:
Input	Expected Output
5		120
6		720
0		1

*/

#include<stdio.h>
int main(){

    int n,facto = 1,start=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (start<=n)
    {
       facto*=start;
       start++;
    }
    
    printf("The factorial of %d is : %d",n,facto);
    
    return 0;
}