/*
Q7. Question: LCM of Two Numbers using for Loop in C
Problem Statement:
Write a program in C to find the Least Common Multiple (LCM) of two given numbers using a for loop. The program should take two integers as input and print their LCM.
Example 1:
Input:
num1 = 12  
num2 = 18

Output:

LCM of 12 and 18 = 36
 Example 2:

Input:
num1 = 5  
num2 = 7

Output:
LCM of 5 and 7 = 35

Example 3:
Input:
num1 = 15  
num2 = 20

Output:
LCM of 15 and 20 = 60

*/

//First method

/*
#include<stdio.h>
int main(){

    int a,b,max,LCM,gcd;
    printf("Enter two numbers for LCM: \n");
    scanf("%d %d",&a,&b);

    (a>b)?max = a: max = b;

    for(int i = 1; i<=max;i++){

        if(a%i==0 && b%i == 0)
        gcd = i;

    }
    printf("GCD is %d:\n",gcd);
  
    LCM = (a*b)/gcd;
    printf("The LCM is : %d",LCM);

    return 0;
}*/


//Second Method


#include<stdio.h>
int main(){

    int a,b;
    printf("Enter two number for LCM: \n");
    scanf("%d %d",&a,&b);

    for(int i = 1; i!=0 ; i++){

        if(i%a==0 && i%b == 0){
            printf("The LCM is %d",i);
            break;;
        }
    }
    return 0;
}