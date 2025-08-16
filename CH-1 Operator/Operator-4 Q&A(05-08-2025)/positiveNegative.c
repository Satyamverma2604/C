/*Check_Positive_or_Negative
Write a C program that takes an integer as input and checks if it is a positive, negative, or zero. 
Display the appropriate message as output using the ternary operator.

 Test Cases:
Input: 10       → Output: Positive Number  
Input: -5       → Output: Negative Number  
Input: 0        → Output: Zero 
give the above program with test cases?
Sample Input
10
Sample Output
Positive Number*/

#include<stdio.h>
int main(){


    int n ;
     scanf("%d",&n);
     (n>0) ? printf("Positive Number") : (n<0) ? printf("Negative Number") : printf("Zero");
    return 0 ;
}

