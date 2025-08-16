#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n = (n>=100 && n<=999) || (n>= -100 && n<= -999);
    n ? printf("It is Three digit number.") : printf("It is not Three digit number.");

    return 0;
}