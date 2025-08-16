/*Temperature Unit Converter
Write a C program that:
Reads a temperature value (integer or float) and a character (C or F).
If the character is C, it means the given temperature is in Celsius, so convert it to Fahrenheit.
If the character is F, it means the given temperature is in Fahrenheit, so convert it to Celsius.
Print the converted temperature value.

Formula:

Celsius → Fahrenheit: F = (C × 9/5) + 32
Fahrenheit → Celsius: C = (F − 32) × 5/9

Example:
Input: 100 C  
Output: 212.00 F  

Input: 98.6 F  
Output: 37.00 C

*/

#include<stdio.h>
int main(){

    float temp;
    char ch;
    printf("Enter the temprature: ");
    scanf(" %f",&temp);
    printf("Enter the temprature type: ");
    scanf(" %c",&ch);

    if((ch == 'C')){
        temp = (temp*9/5)+32;
        printf("%.2f F",temp);
    }else if (ch == 'F'){
        temp = (temp - 32)*5/9;
        printf("%.2f C",temp);
    }else{
        printf("Enter valid data.");
    }


    return 0;
}