/*Que 5 :  Write a 'C' program to reverse the given 3 digit number without using control statments.
--------

Sample input : int a = 123;
Sample Output : reverse =  321
*/

#include<stdio.h>
int main(){
    
    int a,lastDigit,secondLastDigit,ans;
    printf("Enter a 3 digit integer number \n");
    scanf("%d",&a);
    lastDigit = a % 10;
    a /= 10;
    secondLastDigit = a % 10; 
    a /= 10;
    printf("The reversed number is %d%d%d",lastDigit,secondLastDigit,a);
    
   
    
    return 0;
    
}