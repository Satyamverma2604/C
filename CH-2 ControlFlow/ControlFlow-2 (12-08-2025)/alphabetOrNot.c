/*Question 3.


Character is Alphabet or Not
Write a C program to check whether a character is alphabet or not.
Sample Input
Sample input  : char ch = 'A
Sample input  : char ch = '9';

Sample Output
Sample output : Alphabet
Sample output : Not Alphabet
*/


#include<stdio.h>
int main(){

    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch >= 'A' && ch <= 'Z' )  ) {

        printf("%c is Alphabet",ch);
       

    }else if((ch >= 'a' && ch <= 'z' )){
         printf("%c is Alphabet",ch);
    }else{
        printf("%c Is Not Alphabet",ch);
    }


    return 0;
}
