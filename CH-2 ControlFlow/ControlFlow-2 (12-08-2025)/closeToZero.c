/*Q-3
-----------
Write a C program that reads two integers and prints the one closer to zero.
If both numbers are at the same distance from zero, print the larger number.

Example 1:
Input: -5  3  
Output: 3

Example 2:
Input: -2  2  
Output: 2

Example 3:
Input: -1  -3  
Output: -1
Constraints:

Use only if–else statements for decision making.

You may use the abs() function from <stdlib.h>.
*/


#include<stdio.h>
#include<math.h>
int main(){

    int a,b;
    printf("Enter two number \n");
    scanf("%d %d",&a,&b);
    if(abs(a)<abs(b)){
        printf("%d",a);
    }
    if(abs(b)< abs(a)){
        printf("%d",b);
    }if(abs(b) == abs(a)){
        a > b ? printf("%d",a): printf("%d",b);
    }


    return 0;
}