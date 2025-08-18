/*Que 2 :
========

Write a C program to print all EVEN numbers from 1 to given N number using simple if and goto statments.

Sample input : 10
Sample Output : 2 4 6 8 10

Sample input : 5
Sample Output : 2 4

Sample input : -5
Sample Output : Invalid Input.

Sample input : 0
Sample Output : Invalid Input.
*/

#include<stdio.h>
int main(){

    int n,incriment=2;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid number!");
    }
    start: 
    if(incriment > n)
    return 0;
    if(incriment % 2 == 0){
        printf("%d ",incriment);
    }
    incriment ++;
    goto  start;


    return 0;
}