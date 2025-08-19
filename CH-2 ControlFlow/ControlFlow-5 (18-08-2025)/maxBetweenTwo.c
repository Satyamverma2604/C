/*Question 3.


FindMaxBetweenTwo
Write a C program to find the maximum between two numbers using Switch statement.
Sample Input
10
20
Sample Output
20

*/


#include<stdio.h>
int main(){

    int a,b;
    scanf("%d %d",&a,&b);

    switch(a>b){
        case 0: printf("%d",b); break;

        case 1: printf("%d",a);
    }


    return 0;
}