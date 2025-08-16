/*Que-2
______________________
Question: Demonstrate the Working of Increment and Decrement Operators in C
Objective
Write a C program to demonstrate the use of pre-increment (++var) 
and pre-decrement (--var) operators with both integer and floating-point variables.

Requirements
--------------------------------
Declare the following variables:

> Integer variables: a = 10, b = 100
> Floating-point variables: c = 10.5, d = 100.5

Apply the pre-increment (++) operator to:
-----------------------------------------
|- Integer variable a
|- Floating-point variable c

Apply the pre-decrement (--) operator to:
> Integer variable a and b
> Floating-point variable c and d

Display the results using printf in the following format:
++a = result
--b = result
++c = result
--d = result
Return 0 to indicate successful execution.

Expected Output
++a = 11
--b = 99
++c = 11.500000
--d = 99.500000
*/

 #include<stdio.h>
int main(){
    int a =10, b = 100;
    float c = 10.5, d = 100.5;
    
    printf("The value of ++a is : %d\n",++a);
    printf("The value of --b is : %d\n",--b);
    printf("The value of ++c is : %f\n",++c);
    printf("The value of --d is : %f\n",--d);
    
    return 0;
}
