/*Check_Vowel
Check if a Character is a Vowel or Consonant using Ternary & Logical Operators


Example I/0 :
Input: a      → Output: Vowel  
Input: Z      → Output: Consonant  
Input: e      → Output: Vowel 
Sample Input
a
Sample Output
Vowel*/


#include<stdio.h>
int main() {

    char ch;
    scanf("%c",&ch);

    (ch == 'a') || (ch == 'A') ||  (ch == 'e') || (ch == 'E') ||  (ch == 'i') || (ch == 'I') ||  (ch == 'o') || (ch == 'O') ||  (ch == 'u') || (ch == 'U') ? printf("Vowel") : printf("Consonant");

    return 0 ;
}