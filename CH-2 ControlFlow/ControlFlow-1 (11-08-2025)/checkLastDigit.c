/*Q-6:
Write a C program to check whether the last digit of a number is 5.

Example:
Input: 125  
Output: Last digit is 5  

Input: 82  
Output: Last digit is not 5  
*/

#include<stdio.h>
int main(){

    int n ,lastDigit;
    printf("Enter a number: ");
    scanf("%d",&n);
    lastDigit = (n%10);

    if(lastDigit  ==  5){

        printf("Last digit is 5.");
        return 0;
    }
    
    printf("Last digit is not 5.");

    return 0;
}