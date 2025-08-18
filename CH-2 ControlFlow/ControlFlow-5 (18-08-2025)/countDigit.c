/*Que 4 :
========

Write a C program to count the number of digits in a given positive integer using only if and goto statements.

Sample input : 125
Sample Output : 3


Sample input : 1254
Sample Output : 4


Sample input : -123
Sample Output : Invalid Input

Sample input : 0
Sample Output : 1
*/

#include<stdio.h>
int  main(){

    int n,count=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Invalid Input.");
    }
    if(n==0){
        printf("The number has 1 digit.");
        return 0;
    }
    start:
    if(n==0){
        printf("The number has %d digit",count);
    }
    if(n>0){
        n/=10;
        count++;
        goto start;
    }


    return 0;
}