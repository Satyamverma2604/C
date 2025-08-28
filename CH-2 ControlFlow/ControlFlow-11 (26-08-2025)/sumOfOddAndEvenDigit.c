/*
1) Sum of Even and Odd Digits Separately
Question:
Take a number as input and use a while loop to calculate the sum of even digits and sum of odd digits separately.
Example:
Input: 12345
Even sum = 2 + 4 = 6
Odd sum = 1 + 3 + 5 = 9

Test Cases:

Input	Even Sum	Odd Sum
12345		6			9
2468		20			0
13579		0			25

*/

#include<stdio.h>
int main(){

    int n,even=0,odd=0,lastD;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (n>0)
    {
        lastD = n%10;

        if(lastD % 2 == 0){
            even += lastD;
        }else
        odd += lastD;
        n/=10;

    }
    
    printf("Sum of Even Digits : %d\n",even);
    printf("Sum of Odd Digits : %d\n",odd);
    return 0;
}