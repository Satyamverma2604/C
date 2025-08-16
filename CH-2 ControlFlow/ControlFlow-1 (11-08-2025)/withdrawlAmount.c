/*Q-2:
Write a C program that takes a withdrawal amount from the user and checks if it is a multiple of 100 before processing. If it is not a multiple of 100, display "Invalid amount".

Example:
Input: 2500  
Output: Valid amount  

Input: 1230  
Output: Invalid amount 
*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if( n % 100 == 0) {
        printf("Wait Your transection is processing.");
        return 0;
    }

    printf("Invalid amount, Please Enter amount in multiples of 100.");

    return 0;
}