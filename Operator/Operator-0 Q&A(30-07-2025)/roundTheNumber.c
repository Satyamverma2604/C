/*4. Round of the number to it's next multiplication  of 10.
---> input as 36   -   output as 40.
    input as 77  -  output as 80.
*/

#include<stdio.h>
int main(){

    int n,round;
    printf("Enter a two digit integer: ");
    scanf("%d",&n);
    round = (n/10+1)*10;
    printf("The round number is: %d",round);
    return 0;
}