/*Write a C program that asks the user to input an integer and count the digits and print the count of the digits.

Input : 
	Enter a number : 546
Output:
	Count of the digits is : 3*/

#include<stdio.h>
int main(){

    int n , count = 0;
    printf("Enter a number: ");
    scanf("%d",&n);

    do{
        n /= 10;
        count++ ;
    }while(n!=0);

    printf("Count of the digits is : %d",count);

    return 0;
}