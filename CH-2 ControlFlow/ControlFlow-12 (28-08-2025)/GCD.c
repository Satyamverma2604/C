/*
Q4. Greatest Common Divisor (GCD)
Find GCD of two numbers using a for loop.

Example:
Input: 12, 18 → GCD = 6
*/

#include<stdio.h>
int main(){

    int a,b,max,GCD;
    printf("Enter two values: \n");
    scanf("%d %d",&a,&b);
    (a>b)? max = a : max = b;

    for(int i = 1; i<= max ; i++){

        if(a%i==0 && b %i ==0)
        GCD = i;
    }
    printf("GCD is %d ",GCD);
    
    return 0;
}