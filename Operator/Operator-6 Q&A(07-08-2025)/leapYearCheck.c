/*LEAP_YEAR_PROGRAM
Develop a program to check whether a given year is a leap year or not, using logical operators and the ternary operator. 

Leap Year Rule:
----------------------
A year is a leap year if it satisfies:

Divisible by 4 AND not divisible by 100,
OR
Divisible by 400
Sample Input
2020
Sample Output
Leap Year
Constraints:
An integer value representing the year (e.g., 2020)
Leap Year or Not a Leap Year
Explanation
Leap Year Rules Explained: Divisible by 4 → Leap Year Most years that are divisible by 4 are leap years. Example: 2016, 2020, 2024 Except Century Years (ending in 00) → Must also be divisible by 400 Century years (like 1900, 2000, 2100) are only leap years if divisible by 400. Reason: To correct the over-adjustment caused by adding a leap day every 4 years (which slightly overcompensates for the actual solar year).
*/

#include<stdio.h>
int main(){


    int year;
    scanf("%d",&year);
    (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? printf("Leap Year") : printf("Not a Leap Year");

    return 0;
}