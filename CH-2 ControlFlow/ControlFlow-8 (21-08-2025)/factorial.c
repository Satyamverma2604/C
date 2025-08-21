/*write a C program to find the factorial of a given number. Take the input from the user.
Input as :
	Enter a number : 5
Output as :
	Factoria of 5 : 120
    
    */

#include<stdio.h>
int main(){

    int n , factorial = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
         printf("Enter a postive number!!!");
         return 0;
    }
    printf("Factoria of %d : ",n);
   while(n > 0){
        factorial = factorial *n;
        n --;
    }
    printf("%d",factorial);
    
    return 0;
}