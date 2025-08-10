/*Que-5
________________________
Question: Demonstrate the Working of Logical Operators in C
Objective
Write a C program to demonstrate the use of logical operators (&&, ||, !) in C.

Requirements
-------------------------------
Declare three integer variables:

a = 5
b = 5
c = 10

Also declare an integer variable result to store the outcome of logical operations.

Perform and display the results of the following logical expressions:

> (a == b) && (c > b) → Logical AND (true + true = true)
> (a == b) && (c < b) → Logical AND (true + false = false)
> (a == b) || (c < b) → Logical OR (true + false = true)
> (a != b) || (c < b) → Logical OR (false + false = false)
> !(a != b) → Logical NOT (negation of false = true)
> !(a == b) → Logical NOT (negation of true = false)

Display the results in the format:
expression is result
where:
expression is the logical expression being evaluated.
result is 1 if the expression evaluates to true, otherwise 0.

Return 0 to indicate successful execution.

Expected Output

(a == b) && (c > b) is 1
(a == b) && (c < b) is 0
(a == b) || (c < b) is 1
(a != b) || (c < b) is 0
!(a != b) is 1
!(a == b) is 0*/

#include<stdio.h>
int main(){
    int a = 5 , b = 5 , c = 10;
    int result;
    result = (a == b) && (c > b);
    printf("The result of (a == b) && (c > b); is : %d\n",result);
    result = (a == b) && (c < b);
    printf("The result of (a == b) && (c < b); is : %d\n",result);
    result = (a == b) || (c < b);
    printf("The result of (a == b) || (c < b); is : %d\n",result);
    result = (a != b) || (c < b);
    printf("The result of (a != b) || (c < b); is : %d\n",result);
    result = !(a !=b );
    printf("The result of !(a !=b ); is : %d\n",result);
    result = !(a == b);
    printf("The result of !(a == b); is : %d\n",result);
}
