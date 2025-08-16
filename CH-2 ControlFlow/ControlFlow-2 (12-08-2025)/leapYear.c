/*Question 2.

LeapYear
[Tile: Leap Year or Not] [Using if-else]
----------------------------------------
Write a C program to determine if a given year is a leap year or not based on the following conditions: [Using if-else]

A year is a leap year if :- 
----------------------------
It is divisible by 4, and
It is not divisible by 100, except:
If it is divisible by 400, then it is a leap year.

Example Input:
--------------
Enter a year: 2020

Example Output:
---------------
Leap Year

Additional Test Cases:
----------------------

Test Case 1 :-
---------------
Input: 1900

Output: Not a Leap Year

Test Case 2 :-
--------------
Input: 2000
Output: Leap Year

Test Case 3 :-
---------------
Input: 2024
Output: Leap Year

Test Case 4 :-
--------------
Input: 2100
Output: Not a Leap Year
Sample Input
2020
Sample Output
Leap Year
*/




#include<stdio.h>
int main(){


    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if((year % 4 == 0) && (year % 100 != 0) ){
        printf("It is a leap year.");
    }else if((year % 400 == 0)){
        printf("It is a leap year.");
    }else{
        printf("It is not a leap year.");
    }


    return 0;
}