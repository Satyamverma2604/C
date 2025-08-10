/*Write a 'C' program to check and print that given number is even or odd without using ternary operator and control statments.
--------

Sample input : int a = 10
Sample Output : EVEN

Sample input : int a = 125
Sample Output : ODD
*/

#include<stdio.h>
int main(){
    
  int n;
  printf("Enter a integer number : ");
  scanf("%d",&n);
  (n%2==0) && printf("Even") || printf("Odd");

    return 0;
}