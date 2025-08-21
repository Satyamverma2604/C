/*Q-3
-------


Write a C program that takes an integer N from the user and displays the square of all numbers from 1 to N using a while loop.

Sample Input:
	Enter a number: 4
Sample Output:
	1 4 9 16
    */


#include<stdio.h>
int main(){

    int n , i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n <= 0){
        printf("Please enter a positive number.\n");
        return 0;
    }
    while(i <= n){

        printf("%d ",i*i);
        i++;
    }

    return 0;
}