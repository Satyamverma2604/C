/*Uppercase to Lowercase
Write a c program to determine if a character is uppercase or lowercase using the ternary operator.
Sample Input
A
Sample Output
A is an uppercase letter.
*/
#include<stdio.h>
int main(){

    char ch;
    scanf("%c", &ch);

    (ch>=65) && (ch<=90) ? printf("%c is an uppercase letter.",ch) : (ch >= 90) && (ch <= 122) ? printf("%c is a lowercase letter.",ch) : printf("Enter a valid Alphabate.");

    return 0;
}