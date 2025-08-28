/*
Q2. Sum of Natural Numbers
 Question:
Using a while loop, find the sum of the first N natural numbers. (Take N as input from the user.)
Example:
Input: N = 5
Process: 1 + 2 + 3 + 4 + 5 = 15
Output: Sum = 15
Test Cases:

Input	Expected Output
5			15
10			55
1			1
*/

#include<stdio.h>
int main(){

    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0){
        sum+=n;
        n--;
    }
    printf("Sum = %d",sum);


    return 0;
}