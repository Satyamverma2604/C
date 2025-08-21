/*Write a C program that asks the user to input an integer and reverse that number and display the reverse of that given number.

Input as : 
	Enter a number : 123
Output as : 
	Reverse of the given number is : 321
    
    */


#include<stdio.h>
int main(){

    int n , r;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse of the given number is : ");
    if(n<0) printf("-", n = -n);
   do{
        r = n % 10;
        printf("%d",r);
        n /= 10;
    } while (n!=0);
    
    return 0;
}