/*
Q2.  Check Perfect Number
Question:
A number is Perfect if the sum of its divisors (excluding itself) equals the number.
Write a program to check if a number is perfect.

Example:
Input: 28 → Divisors (1+2+4+7+14=28) → Perfect Number
*/

#include<stdio.h>
int main(){

    int n,sum=0,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    a = n;

    if(n<=0){
        printf("Invalid input please enter a positive number.");
        return 0;
    }
    for(int i = 1; i <= n/2; i++){

        if(n%i == 0){
            sum+=i;
        }

    }
    if(a==sum)
    printf("%d is a perfect number.",a);
    else
    printf("%d is not a perfect number.",a);

    return 0;
}