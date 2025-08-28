/*
Q3. Reverse Digits
Question:
Write a program that takes an integer as input and uses a while loop to reverse the digits of the number.
Example:

Input: 1234
Process: 4321
Output: 4321

Test Cases:
Input	Expected Output
1234	4321
500		5
9876	6789

*/
#include<stdio.h>
int main(){

    int n,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (n>0)
    {
        rev = (rev*10) + n%10;
        n/=10;
    }
    printf("The reverse number is : %d",rev);
    

    return 0;
}