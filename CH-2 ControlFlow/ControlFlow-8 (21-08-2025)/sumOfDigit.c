/*Write a C program that asks the user to input a integer and calculates the sum of its digits. Using While loop.

Input : 
	Enter a three digit number : 123
Output :
	Sum of the digits : 6
*/

#include<stdio.h>
int main(){

    int n,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0) n = -n;
    while (n!=0){
        sum += n % 10;
        n /= 10;
    };
    
    printf("Sum of the digits : %d",sum);
    return 0;
}