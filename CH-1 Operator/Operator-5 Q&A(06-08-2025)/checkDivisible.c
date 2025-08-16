/*Check_Divisible
Check if a Number is Even and Divisible by 5
Sample Input
20
Sample Output
Even and Divisible by 5
*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    ( n % 2 == 0) && ( n % 5 == 0 ) ? printf("Even and Divisible by 5") : printf("Not both Even and Divisible by 5");
    return 0;

}