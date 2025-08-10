/*Check_Temperature
Check if Temperature is Cold, Normal or Hot
Problem:
Write a C program that takes a temperature value in Celsius as input and displays:
"Cold" if temperature < 20
"Normal" if temperature is between 20 and 30
"Hot" if temperature > 30
Use nested ternary operator
Sample Input
15
Sample Output
Cold*/

#include<stdio.h>

int main(){

    int temp;

    scanf("%d", &temp);

    (temp<20) ? printf("Cold") : (temp >= 20) && (temp < 30) ? printf("Normal") : printf("Hot");

    return 0 ;
}