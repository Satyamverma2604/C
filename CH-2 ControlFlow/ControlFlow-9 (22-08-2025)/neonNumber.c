/*Q-1
---------
Check Neon Number
A number is neon if sum of digits of its square = number.
Example: 9² = 81 → 8+1 = 9.

Condition: Sum of digits of square = number

Input (n)	Square (n²)	Sum of Digits of n²	Output
9	                        81	             8+1 = 9                  	 Neon
1				1			1				 Neon
7				49		    4+9 = 13 ≠ 7		 Not Neon
12			       144		   1+4+4 = 9 ≠ 12   	 Not Neon
*/

#include<stdio.h>
int main(){

 int n,square,sum=0;
 printf("Enter your number: ");
 scanf("%d",&n);
 square = n*n;
 while(square>0){
    sum += (square%10);
    square/=10;
 }
if(sum == n)
printf("%d is neon number",n);
else 
printf("%d is not a neon number",n);

    return 0;
}