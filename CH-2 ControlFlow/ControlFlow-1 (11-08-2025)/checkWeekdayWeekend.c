/*
Q-7:
Write a C program that takes a day number (1 to 7) as input and checks whether it is a weekday or weekend.
Assumptions:

1 = Monday
2 = Tuesday
3 = Wednesday
4 = Thursday
5 = Friday
6 = Saturday
7 = Sunday

Rules:

Output "Weekday" for 1 to 5
Output "Weekend" for 6 and 7

If the input is outside 1–7, display "Invalid day number"

Examples:
Input: 3  
Output: Weekday  

Input: 6  
Output: Weekend  

Input: 9  
Output: Invalid day number  

Input: 1  
Output: Weekday  

*/

#include<stdio.h>
int main(){

    int  n;
    printf("Enter a weekday number form (1-7): ");
    scanf("%d",&n);
    if((n>=1) && (n<=5)){

        printf("Weekday");
        return 0;
    }
    if((n>=6) && (n<=7)){

        printf("Weekend");
        return 0;
    }

    printf("Enter a valid day nubmer");

    return 0;
}