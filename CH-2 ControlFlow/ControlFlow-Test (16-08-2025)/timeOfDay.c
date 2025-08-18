/*Question 3.


Time_Of_Day
Write a C program that takes the time of day as input (in hours) and prints whether it is morning, afternoon, evening, or night using an if statement.

-categorize the time of day into four categories:
if the time between 0 - 5 then print Night
if the time between 6 - 11 then print Morning
if the time between 12 -17 then print Afternoon
if the time between 18 - 23 then print Evening

Sample Input
3
Sample Output
It is night.
*/

#include<stdio.h>
int main(){

    int time;
    scanf("%d",&time);

    if(time <=5){
        printf("It is night.");
    }else if(time <= 11){
        printf("It is morning.");
    }else if(time <=17){
        printf("It is afternoon.");
    }else{
        printf("It is evening.");
    }

    return 0;
}