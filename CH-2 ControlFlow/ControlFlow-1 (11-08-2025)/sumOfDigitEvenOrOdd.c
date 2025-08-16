/*Q-5:
Write a C program that takes a two digit number from the user and checks whether the sum of its digits is even.

Example:
Input: 24  
Output: Sum of digits is even  

Input: 12 
Output: Sum of digits is odd 
*/

#include<stdio.h>
int main(){

    int n ,sumOfDigit;
    printf("Enter a two digit number: ");
    scanf("%d",&n);
    sumOfDigit = (n/10) + (n%10);

    if(sumOfDigit % 2  == 0){

        printf("Sum of digits is Even.");
        return 0;
    }
    
    printf("Sum of digits is Odd.");

    return 0;
}