/*Question 2.

VowelOrConsonantUsingSwitch
Write a C program to check whether a Alphabet is vowel or consonant using Switch Case.
Sample Input
a
Sample Output
Vowel*/



#include<stdio.h>

int main() {

    char ch;
    int ans;
    scanf("%c",&ch);

    ans = ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' ? 0 : (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? 1 : 2;

    switch(ans){

        case 0: printf("Vowel"); break;

        case 1: printf("Consonant"); break;

        default : printf("Invalid input");
    }

    return 0;
}