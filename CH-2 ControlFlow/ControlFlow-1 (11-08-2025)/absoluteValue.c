/*Q-1:
Write a C program that takes an integer from the user and prints its absolute value without using the abs() function.

Example:
Input: -45  
Output: 45  

Input: 87  
Output: 87  
*/


#include "stdio.h"
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<0)
    n = -n;
    printf("The absolute value is : %d",n);
    return 0;
}