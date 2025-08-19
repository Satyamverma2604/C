/*Question 3.


Calculate the Day of the Week
[Title:- Calculate the Day of the Week]
----------------------------------------
Write a program that takes a number (1-7) as input and prints the day of the week using a switch statement. If the number is outside this range, display an error message.

Test Case-1 :-
--------------
Input :- 1
--------

Output :- "Monday" (Valid)
----------

Test Case-2 :-
--------------
Input :- 7
--------

Output :- "Sunday" (Valid)
---------

Test Case-3 :-
--------------
Input :- 0/-1
--------

Output :- "Invalid day number. Enter a number between 1 and 7." (Invalid)
---------
Sample Input
1
Sample Output
Monday
Explanation
Use switch case's
*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    switch(n){
        
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thrusday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;

        default : printf("Invalid input! Please enter a number between 1 and 7.");

    }


    return  0;
}