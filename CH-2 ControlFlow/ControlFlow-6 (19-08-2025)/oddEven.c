/*Question 1.


OddEvenByUsingSwitch
Write a C program to check the number is even or odd by using Switch Case.
Sample Input
10
Sample Output
Even
*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    switch(n%2 == 0){

        case 0: printf("Odd"); break;
        case 1: printf("Even");

    }
    return 0;
}