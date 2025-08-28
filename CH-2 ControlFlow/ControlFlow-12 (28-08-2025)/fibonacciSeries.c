/*
Q1. Fibonacci Series
Question:
Print the first N Fibonacci numbers using a for loop.
Example:
Input: N=7
Output: 0 1 1 2 3 5 8
*/

#include<stdio.h>
int main(){

    int n,a1=0,a2=1,next;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input please enter a positive number.");
        return 0;
    }
    printf("The fibonacci Series till %d term is : ",n);
   for(int i = 1; i<=n ; i++)// 0 1 1 2 3 
   {
        printf(" %d",a1);
        next = a1+a2;
        a1=a2;
        a2 = next;
        count++;
        
    }
    
    return 0;
}