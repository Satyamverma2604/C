/*Ques 7
------------
  Write a 'C' program to check and print the Maximum number among three numbers using ternary operator.

Sample input : int a = 10 , b = 200, c = 134;
Sample Output : MAX = 200

Sample input : int a = 300 , b = 200, c = 134;
Sample Output : MAX = 300

Sample input : int a = 300 , b = 300, c = 300;
Sample Output : All are same
*/

#include<stdio.h>
int main(){
    
    int a,b,c;
    printf("Enter three integer number \n");
    scanf("%d %d %d",&a,&b,&c);
    
    ((a>b) && (a>c)) ? printf("Frist one is greater.") :((b>a) && (b>c))? printf("Second one is greater."):((c>a) && (c>b))?printf("Third one is greater."):printf("All three are equal.");
    
    return 0;
    
}