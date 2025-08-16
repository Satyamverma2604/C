/*Q-3:
Write a C program to check if an entered character is an alphabet or not an alphabet.

Example:
Input: A  
Output: Alphabet  

Input: @  
Output: Not Alphabet
*/

#include<stdio.h>
int main(){

    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z' ) || (ch >= 'a' && ch <= 'z' ) ) {

        printf("It's a Alphabet.");
        return 0;

    }

    printf("It's not a Alphabet.");

    return 0;
}