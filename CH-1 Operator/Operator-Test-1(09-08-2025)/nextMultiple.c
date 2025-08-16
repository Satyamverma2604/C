/*Question 3.

Question: Next_Tens_Multiple (Two-Digit Number)
Problem Statement

Write a C program that takes a two-digit integer input and checks its first digit.

If the first digit is greater than or equal to 5, print the next 10’s multiple of the number.

Otherwise, print the previous 10’s multiple of the number.

Note: You are not allowed to use any control flow statements (if, else, switch, loops) or ternary operators.

Input Format

A single two-digit integer input.

Output Format

Print the required 10’s multiple according to the condition.

Examples

Input: 23
Output: 20

Input: 47
Output: 50

Input: 59
Output: 60

Input: 81
Output: 90
*/




#include<stdio.h>
int main(){

	int n,lastD;
	scanf("%d",&n);
	
	lastD = n%10;
((lastD>=5) && printf("The next 10s multiple is : %d",(n/10+1)*10)) || printf("The previous 10s multiple is : %d",(n/10)*10);

   return 0;

}