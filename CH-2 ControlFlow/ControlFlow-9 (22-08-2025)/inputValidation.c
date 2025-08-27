/*
Q-6
--------
Input Validation System
Write a program that asks user to enter a positive integer and validates the input using do-while loop.

Hints:
- Continue asking until user enters a positive number
- Handle negative numbers and zero
- Display appropriate error messages
- Show the valid input once entered

Sample Input:
Enter a positive integer: -5
Enter a positive integer: 0
Enter a positive integer: 15

Sample Output:
Invalid! Please enter a positive number.
Invalid! Please enter a positive number.
Valid input: 15

*/

#include<stdio.h>
int main(){

int n;
do{
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0){
        printf("Valid Input: %d",n);
        break;
    }
    printf("Invalid! Please enter a positive number.\n");
}while(n<=0);

    return 0;
}