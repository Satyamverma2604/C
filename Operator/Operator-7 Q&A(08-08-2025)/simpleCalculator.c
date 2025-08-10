/*Ques - 2
----------------
Write a program to create a simple calculator using the ternary operator. 
The program should perform addition, subtraction, multiplication, and division based on user input.

input : 
	Enter first number : 10
	Enter second number : 20
	Enter operator(+,-,/,*,%) : +
output :
	Addition is : 30
*/

#include<stdio.h>
int main(){

int a,b;
char ch;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter operator number: ");
scanf(" %c",&ch);
(ch == '+') ? printf("Addition is : %d",a+b) : (ch == '-') ? printf("Substraction is : %d", a-b) : (ch == '*') ? printf("Multiplication is : %d", a*b) : printf("Division is : %d", a/b);

}

