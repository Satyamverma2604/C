/*Que 3 :
========

Write a C program to print all ODD numbers from 1 to given N number using simple if and goto statments.

Sample input : 10
Sample Output : 1 3 5 7 9

Sample input : 5
Sample Output : 1 3 5

Sample input : -5
Sample Output : Invalid Input.

Sample input : 0
Sample Output : Invalid Input.
*/

#include<stdio.h>
int main(){

    int n,incriment=1;
    printf("Enter a number: ");
    
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid number!");
    }
    start: 
    if(incriment > n)
    return 0;
    if(incriment % 2 == 1){
        printf("%d ",incriment);
    }
    incriment ++;
    goto  start;


    return 0;
}