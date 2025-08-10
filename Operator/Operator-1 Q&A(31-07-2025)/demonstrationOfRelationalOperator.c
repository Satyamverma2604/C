/*Que-4
________________________
Question: Demonstrate the Working of Relational Operators in C
Objective
Write a C program to demonstrate the use of relational operators 
(==, !=, >, <, >=, <=) in C.

Requirements
-------------------------------
Declare three integer variables:
> a = 5
> b = 5
> c = 10

Perform and display the results of the following relational operations:
---------------------------------------------------------------------
|-  a == b and a == c → Equality check
|-  a > b and a > c → Greater than check
|-  a < b and a < c → Less than check
|-  a != b and a != c → Not equal check
|-  a >= b and a >= c → Greater than or equal check
|-  a <= b and a <= c → Less than or equal check

Display the results using the format:
-------------------------------------
x operator y is result
where:
> x and y are the values being compared.
> result will be 1 if the relation is true, otherwise 0.
> Return 0 to indicate successful execution.

Expected Output
___________________
5 == 5 is 1
5 == 10 is 0
5 > 5 is 0
5 > 10 is 0
5 < 5 is 0
5 < 10 is 1
5 != 5 is 0
5 != 10 is 1
5 >= 5 is 1
5 >= 10 is 0
5 <= 5 is 1
5 <= 10 is 1
*/

#include<stdio.h>
int main(){
    
    int a =5 , b = 5 , c = 10;
    printf("The answer of a == b is : %d\n", a==b);
    printf("The answer of a == c is : %d\n", a==c);
    printf("The answer of a > b is : %d\n", a>b);
    printf("The answer of a > c is : %d\n", a>c);
    printf("The answer of a < b is : %d\n", a<b);
    printf("The answer of a < c is : %d\n", a<c);
    printf("The answer of a != b is : %d\n", a!=b);
    printf("The answer of a != c is : %d\n", a!=c);
    printf("The answer of a >= b is : %d\n", a>=b);
    printf("The answer of a >= c is : %d\n", a>=c);
    printf("The answer of a <= b is : %d\n", a<=b);
    printf("The answer of a <= c is : %d\n", a<=c);
    
    return 0;
}
