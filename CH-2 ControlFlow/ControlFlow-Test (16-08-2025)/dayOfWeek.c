/*Qustion 4.


Find_Day_Of_Week
Write a C program to find the day of the week for a given number (1 for Monday, 2 for Tuesday, etc.) using nested if-else statements.

Input:
	Enter a number (1-7): 4
Output:
	The day is Thursday.
Sample Input
4
Sample Output
The day is Thursday.
*/



#include<stdio.h>
int main(){

    int day;
    scanf("%d",&day);
    if(day < 1 || day > 7){
        printf("Invalid input!.");
    }else if(day == 1){
        printf("The day is Monday.");
    
    }else if(day == 2){
        printf("The day is Tuesday.");
    
    }else if(day == 3){
        printf("The day is Wednesday.");
    
    }else if(day == 4){
        printf("The day is Thursday.");
    
    }else if(day == 5){
        printf("The day is Friday.");
    
    }else if(day == 6){
        printf("The day is Saturday.");
    
    }else {
        printf("The day is Sunday.");
    }

    return 0;
}