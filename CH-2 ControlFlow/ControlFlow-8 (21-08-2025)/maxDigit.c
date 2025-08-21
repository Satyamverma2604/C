/*Q-1
------

Write a C program to find the Maximum digit in a given integer number. 
For example, if the input number is 153830, the output should be 8 since 8 is the highest digit in the number.

Sample input : 153830

Sample Output : 8 is highest digit in the number.

*/


#include<stdio.h>
int main(){

    int n,max = -9,lastDigit;
    printf("Enter a number: ");
    scanf("%d",&n);

    do{
        lastDigit = n % 10;
        if(max < lastDigit)
        max = lastDigit;
        n /= 10;
    }while(n!=0);
    printf("%d is highest digit in the number.",max);

    return 0;
}