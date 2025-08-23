/*Q-3
-------
Check Harshad (Niven) Number
A number is Harshad if divisible by sum of its digits.
Example: 18 ÷ (1+8) = 2.

Condition: Number % Sum of digits == 0

Input (n)	Sum of Digits		Divisible?		Output
18				1+8 = 9			18 % 9 = 0		Niven
12				1+2 = 3			12 % 3 = 0		Niven
21				2+1 = 3			21 % 3 = 0		Niven
19				1+9 = 10		19 % 10 ≠ 0		Not Niven
1729			1+7+2+9 = 19	1729 % 19 = 0	Niven
11				1+1 = 2			11 % 2 ≠ 0		Not Niven

*/

#include<stdio.h>
int main(){

 int n,sum=0,a;
 printf("Enter your number: ");
 scanf("%d",&n);
 a = n;

 while (n>0)
 {
    sum += n%10;
    n/=10;
 }

 if(a % sum == 0)
 printf("Niven");
 else 
 printf("Not Niven");
 
    return 0;
}