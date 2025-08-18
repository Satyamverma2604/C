/*Question 2.


NumberOfDaysInMonth
Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program. 



Input as :

Enter month number (1-12): 4

Output as :

Number of days: 30
Sample Input
4
Sample Output
Number of days: 30
*/

#include<stdio.h>
int main(){

    int month;
    scanf("%d",&month);
  
     if(month == 2){
        printf("Number of days: 28");
    }else if(month == 4 || month == 6 || month == 9 || month == 11){
        printf("Number of days: 30");
    }else if(month >= 1 && month <= 12){
        printf("Number of days: 31");
    }else{
        printf("Invalid month number. Please enter between 1 and 12.");
    }

    return 0;
}
