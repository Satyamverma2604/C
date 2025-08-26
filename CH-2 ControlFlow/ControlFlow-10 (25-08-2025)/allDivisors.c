/*
Que 2 :
--------
Write a C program to print all divisors of a given number n using a for loop.
Input:
	Enter a number: 12
Output:
	The divisors of 12 are: 1 2 3 4 6 12
    
*/



#include<stdio.h>
int main(){

    int n;
    printf("Enter a Positive number: ");
    scanf("%d",&n);
    if(n<0){

        printf("Invalid  Input!");
        return 0;
    }
    printf("The divisors of %d are: ",n);

    for(int i = 1;i<=n;i++){

        if(n%i==0){

            printf("%d ",i);
        }
    }

    return 0;
}