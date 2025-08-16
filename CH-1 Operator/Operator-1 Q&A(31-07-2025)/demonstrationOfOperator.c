/*Que-1
_______________
Question: Demonstration of Arithmetic Operators in C
Objective
Write a C program to demonstrate the working of basic arithmetic operators (+, -, *, /, %) using two integer values.

Requirements
------------------
Declare two integer variables a and b with values:

a = 9

b = 4

Perform the following arithmetic operations:
_____________________________________________
|- Addition
|- Subtraction 
|- Multiplication 
|- Division  → integer division
|- Modulus   → remainder after division

> Store the result of each operation in a third variable c.
> Display the results using printf in the following format:

a+b = result
a-b = result
a*b = result
a/b = result
Remainder when a divided by b = result

Expected Output

a+b = 13
a-b = 5
a*b = 36
a/b = 2
Remainder when a divided by b = 1
*/


#include<stdio.h>
int main(){
    int a = 9 , b = 4;
    printf("The answer of a+b is : %d",a+b);
    printf("\nThe answer of a-b is : %d",a-b);
    printf("\nThe answer of a*b is : %d",a*b);
    printf("\nThe answer of a/b is : %d",a/b);
    printf("\nThe answer of a%%b is : %d",a%b);
    return 0;
}