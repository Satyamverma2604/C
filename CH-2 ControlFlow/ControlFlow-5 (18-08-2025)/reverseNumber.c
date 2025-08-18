/*Que 5 :
========

Write a C program to reverse a given positive integer number using only if and goto statements

Sample input : 123
Sample Output : 321

Sample input : 4321
Sample Output : 1234


Sample input : -123
Sample Output : Invalid Input

Sample input : 0
Sample Output : Invalid Input
*/

#include<stdio.h>
int main(){

    int n,rev = 0,lastD;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input");
        return 0;
    }
    start:
    if(n==0){
        printf("The reversed num is %d.",rev);
    }
    if(n>0){
        lastD = n%10;
        rev = rev * 10 + lastD;
        n/=10;
        goto start;
    }


    return 0;
}