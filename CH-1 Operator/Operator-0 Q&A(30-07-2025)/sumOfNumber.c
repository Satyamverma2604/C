/*1. Make a sum of number by using operator concept.
--->   input as 65 output as 11.*/


#include <stdio.h>

int main()
{
    int a;
    printf("Enter a two digit integer : ");
    scanf("%d", &a);
    int sum = 0;
   /*  int lastDigit = a %10;
    sum = sum + lastDigit;
    a /= 10;
     lastDigit = a %10;
    sum = sum + lastDigit;*/
    // second method

    sum = a %10 + a /10;
    printf("The sum is %d ", sum);
    return 0;
}
