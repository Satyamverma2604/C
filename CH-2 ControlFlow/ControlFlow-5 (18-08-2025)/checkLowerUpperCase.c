/*Question 2.

Check Upper/Lower Case
Write a c program to check the given character is in uppercase or lowercase by using switch case.
Sample Input
Sample Input :
Enter Character : A
Sample Output
Sample Output :UpperCase
*/


#include<stdio.h>
int main(){

    char ch;
    scanf("%c",&ch);
 

    switch((ch>='a'&&ch<='z') ? 0 :(ch>='A'&&ch<='B') ? 1: 2){

        case 0: printf("LowerCase"); break;
        
        case 1: printf("UpperCase"); break;

        case 2: printf("Not a Alphabate");
    }

    return 0;
}