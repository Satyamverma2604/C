/*

ues - 1
--------------
A Strong Number is a number in which the sum of the factorial of its digits equals the number itself.

Example:

145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 
2 = 2! = 2 

40585 = 4! + 0! + 5! + 8! + 5! = 40585
Check the given number is strong number or not by using nested while loop.
Example : 
Input as : 145
Output as : 145 is a strong number.

Example : 
Input as : 125
Output : 125 is not a strong number.

*/

#include<stdio.h>
int main(){


    int n,fact=1,a,lastD,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    a = n;

    for(n;n!=0;n/=10){
        fact =1;
        lastD = n%10;

        for(int i =1; i<=lastD; i++){

            fact*=i;


        }

        sum+=fact;
    }

    if(a==sum)
    printf("Strong number.");
    else
    printf("Not a strong number.");

    return 0;
}