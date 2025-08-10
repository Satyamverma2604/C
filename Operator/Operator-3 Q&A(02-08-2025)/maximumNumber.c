/*Que 4 :  Write a 'C' program to check and print the Maximum number among two numbers without using ternary operator and control statments.
--------

Sample input : int a = 10 , b = 20
Sample Output : MAX = 20
*/

#include<stdio.h>
int main(){
    
    int a,b;
    printf("Enter two number \n");
    scanf("%d %d",&a,&b);
    
    ((a>b) && printf("Frist one is greater.")) || ((b>a) && printf("Second one is greater.")) || printf("Both are equal");
    
    return 0;
    
}