/*

Q5. Count Digits of a Number
Question:
Write a program that takes an integer as input and uses a while loop to count the number of digits in the number.

Example:
Input: 12345
Process: Count = 5
Output: Number of digits = 5

Test Cases:
Input	Expected Output
12345	Number of digits = 5
7		Number of digits = 1
1000	Number of digits = 4

*/

#include<stdio.h>
int main(){

    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (n>0)
    {
        count++;
        n/=10;
        
    }

    printf("total digit is %d",count);
    
    return 0;
}