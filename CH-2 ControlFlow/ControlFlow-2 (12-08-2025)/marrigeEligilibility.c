/*Question 1.

MarriageEligibility
Write a C program to read  age of person and  check the person is eligible for marriage or not using if-else.
	if user age is above 21 then eligible.
Sample input  :
                Enter your age: 25
Sample output :  
		you are eligible to marriage.

Sample input  :
		 Enter your age: 16
Sample output :
		 Sorry are not eligible to marriage.

Sample Input
25
Sample Output
you are eligible to marriage.

*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter your age: ");
    scanf("%d",&n);
    if(n>21){
        printf("you are eligible to marriage.");
    }else{
        printf("Sorry are not eligible to marriage.");
    }

    return 0;
}