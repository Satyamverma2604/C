/*Que-6
_____________________
Question: Find the Size of Basic Data Types in C
Objective
Write a C program to determine and display the size in bytes of the 
following basic C data types:

> int
> float
> double
> char

Requirements
--------------------------------------
Declare variables of the following types:

> Integer → int a;
> Floating-point → float b;
> Double-precision floating-point → double c;
> Character → char d;

Use the sizeof operator to determine the size of each variable in bytes.

Display the output in the format:

Size of int = X bytes
Size of float = X bytes
Size of double = X bytes
Size of char = X byte

where X is the number of bytes occupied by the data type on your system.

Return 0 to indicate successful execution.

Expected Output
(Output may vary depending on system architecture)

Size of int = 4 bytes
Size of float = 4 bytes
Size of double = 8 bytes
Size of char = 1 byte
_____________________*/


#include<stdio.h>
int main(){
    int a;
    float b;
    double c;
    char d;
    printf("The size of Integer is : %d\n",sizeof(a));
    printf("The size of Float is : %d\n",sizeof(b));
    printf("The size of Double is : %d\n",sizeof(c));
    printf("The size of Character is : %d\n",sizeof(d));
    return 0;
}