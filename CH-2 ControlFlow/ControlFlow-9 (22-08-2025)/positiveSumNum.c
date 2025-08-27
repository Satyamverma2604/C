/*
------
Positive Number Sum
Create a program that keeps taking positive numbers from user and calculates their sum using do-while loop. Stop when user enters 0 or negative number.

Hints:
- Initialize sum to 0
- Take input in each iteration
- Add to sum only if number is positive
- Stop when non-positive number is entered

Sample Input:
Enter number: 10
Enter number: 20
Enter number: 15
Enter number: 0

Sample Output:
Sum of positive numbers: 45

*/

#include<stdio.h>
int main(){

int n,sum =0;
do{
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0) break;
    sum+=n;
}while(n>0);

printf("The sum is : %d",sum);

    return 0;
}