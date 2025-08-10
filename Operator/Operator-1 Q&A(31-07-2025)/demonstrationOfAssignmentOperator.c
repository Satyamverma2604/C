/*Que-3
________________
Question: Demonstrate the Working of Assignment Operators in C
Objective
Write a C program to demonstrate the use of assignment operators 
(=, +=, -=, *=, /=, %=) in C.

Requirements
------------------------------
Declare two integer variables:

> a = 5
> c (uninitialized)

Perform the following operations step-by-step:
-----------------------------------------------
> c = a;  → Assign value of a to c.
> c += a; → Add a to c and assign the result to c.
> c -= a; → Subtract a from c and assign the result to c.
> c *= a; → Multiply c by a and assign the result to c.
> c /= a; → Divide c by a and assign the result to c.
> c %= a; → Assign the remainder of c / a to c.

After each operation, print the value of c in the format:
c = value
Return 0 to indicate successful execution.

Expected Output

c = 5
c = 10
c = 5
c = 25
c = 5
c = 0
*/

#include<stdio.h>
int main(){
    int a = 5;
    int c;
    c = a;
    printf("The value of c = a; is : %d\n",c);
     c+= a;
    printf("The value of  c+= a; is : %d\n",c);
    c -= a;
    printf("The value of c -= a;is : %d\n",c);
    c *= a;
    printf("The value of  c *= a; is : %d\n",c);
    c /= a;
    printf("The value of  c /= a;is : %d\n",c);
    c %= a; 
    printf("The value of  c %%= a; is : %d\n",c);
   
    
    
    return 0;
}
