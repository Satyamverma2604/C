/*Question 4.

PrintASCIUsingWhile
Write a C program that prints all characters from uppercase 'A' to lowercase 'z' along with their ASCII values using a while loop.

Sample Output :-
-----------------
Character and its ASCII value:
A: 65
B: 66
C: 67
...
Y: 89
Z: 90
[: 91
\: 92
]: 93
^: 94
_: 95
`: 96
a: 97
b: 98
c: 99
...
x: 120
y: 121
z: 122
*/



#include<stdio.h>
int main(){

    int n = 65;
    scanf("%d",&n);
    printf("Character and its ASCII value:\n");
    while(n<=122){

        printf("%c: %d\n",n,n);
        n++;

    }


    return 0;
}