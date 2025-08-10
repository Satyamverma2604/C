/*Ques 6:
-----------
Write a 'C' program to check and print the minimum number among two numbers  using ternary operator.
--------

Sample input : int a = 10 , b = 200
Sample Output : Min = 100*/

#include<stdio.h>
int main(){
    
    int a,b;
    printf("Enter two number \n");
    scanf("%d %d",&a,&b);
    
    (a<b) ? printf("Frist one is smaller.") :(b<a)? printf("Second one is smaller."):printf("Both are equal.");
    
    return 0;
    
}