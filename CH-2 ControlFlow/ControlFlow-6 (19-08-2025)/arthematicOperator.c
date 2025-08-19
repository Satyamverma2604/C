/*AirthmaticOperationUsingSwitch
Write a C program to do a arithmetic operation on two numbers by using Switch Case. Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.



Input as: 

------------

Enter num1 :10

Enter num2 :20

Enter operation : *



O/P as :

---------

Multiplication is :200
Sample Input
10
20
*
Sample Output
Multiplication is: 200
*/


#include<stdio.h>
int main(){

    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);

    switch(ch){

        case '+': printf("Addition is: %d",a+b); break;
        case '-': printf("Subtraction is: %d",a-b); break;
        case '*': printf("Multiplication is: %d",a*b); break;
        case '/': printf("Division is: %d",a/b); break;
        case '%': printf("Modulus is: %d",a%b); break;

        default : printf("Enter a valid operator");

    }

    return 0;
}
