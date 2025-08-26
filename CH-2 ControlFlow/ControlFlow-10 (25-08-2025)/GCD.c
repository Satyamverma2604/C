/*

Que 3 :
--------
Write a C program to find the Greatest Common Divisor (GCD) of two numbers using a for loop.

Input:
	Enter two numbers: 12 18
Output:
	The GCD of 12 and 18 is: 6
    
*/

#include<stdio.h>
int main(){

    int a,b,gcd;
    printf("Enter first Positive number: ");
    scanf("%d",&a);
    printf("Enter second Positive number: ");
    scanf("%d",&b);
    if(a<0 || b<0){

        printf("Invalid  Input!");
        return 0;
    }
    
    for (int i=1 ; i<=a && i<= b; i++ )    {
        if( a%i==0 && b%i == 0)
        gcd=i;
        
    }
    printf("The GCD of %d and %d is: %d",a,b,gcd);
    
    return 0;
}