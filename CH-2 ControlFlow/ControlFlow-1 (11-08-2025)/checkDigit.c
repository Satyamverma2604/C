/*
Q-4:
Write a C program to check if an entered character is a digit or not a digit.

Example:
Input: 9  
Output: Digit  

Input: b  
Output: Not Digit 
*/

#include<stdio.h>
int main(){

    char n;
    printf("Enter a digit : ");
    scanf("%c",&n);

    if((n >= '0' && n <= '9' ) ) {

        printf("It's a Digit.");
        return 0;

    }
      printf("It's not a Digit.");

    return 0;
}