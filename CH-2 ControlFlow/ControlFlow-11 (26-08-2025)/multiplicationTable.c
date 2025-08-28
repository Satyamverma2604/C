/*
Q4. Multiplication Table
 Question:
Using a while loop, print the multiplication table of a given number n up to 10.
Example:

Input: n = 3
Output:

3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
...
3 x 10 = 30

Test Cases:
Input	Expected Output (first 3 lines only shown)
2		2x1=2, 2x2=4, 2x3=6 … 2x10=20
5		5x1=5, 5x2=10, 5x3=15 … 5x10=50

*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int i = 1;
    while(i<=10){
        printf("%d X %d = %d\n",n,i,n*i);
        i++;

    }

    return 0;
}