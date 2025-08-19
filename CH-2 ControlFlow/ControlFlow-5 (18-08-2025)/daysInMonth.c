/*DaysInAMonth
[Title: Determine the Number of Days in a Month Based on User Input]
--------------------------------------------------------------------

Problem Statement :-
--------------------
Write a C program that takes a month number (1-12) as input from the user and prints the number of days in that month using a switch statement. If the user enters a number outside the range of 1-12, the program should display an error message.

Explanation :-
--------------
-> Use a switch statement to handle different cases for each month:
-> For months with 31 days (January, March, May, July, August, October, December), display "31 days".
-> For months with 30 days (April, June, September, November), display "30 days".
-> For February (month 2), print "28 or 29 days (depending on leap year)" (Leap years are not considered in this basic program).
-> For any invalid month number (not between 1 and 12), print "Invalid month number".

Program Logic :-
----------------
Prompt the user to enter the month number (1-12).
Use a switch statement to check the month number and print the corresponding number of days.
If the input is invalid (not between 1 and 12), print an error message.

Test Case 1 :- [Valid Month with 31 Days]
--------------
Input :-
---------
Enter Month: 1

Output :-
---------
31 days

Test Case 2 :- [Valid Month with 30 Days]
--------------
Input :-
--------
Enter Month: 4

Output :-
----------
30 days

Test Case 3 :- [Invalid Month (Greater than 12)]
--------------
Input :-
--------
Enter Month: 13

Output :-
---------
Invalid month number

Test Case 4 :- [February (28 or 29 days)]
--------------
Input :-
---------
Enter Month: 2

Output :-
---------
28 or 29 days (depending on leap year)

Test Case 5 :- Invalid Month (Less than 1)
--------------
Input :-
--------
Enter Month: 0/-2[-ve/+ve]

Output :-
----------
Invalid month number
Sample Input
4
Sample Output
30 Days

*/


#include<stdio.h>
int main(){

    int month;
    scanf("%d",&month);

    switch(month){

        case 2: printf("28 or 29 days (depending on leap year)"); break;

        case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("31 days"); break;

        case 4: case 6: case 9: case 11: printf("30 days"); break;

        default : printf("Invalid month number");

    }

    return 0;
}