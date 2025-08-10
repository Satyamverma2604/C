/*
Calculates_ Discount
Using ternary operator write a C program for a bookstore named "BookWorld" that calculates the discounted amount based on the total purchase amount. 

The store provides three types of discounts to its customers:
-> If the total purchase amount is less than Rs. 1000, there is no discount.
-> If the total purchase amount is between Rs. 1000 and Rs. 5000 (inclusive), customers get a 5% discount on the total purchase amount.
-> If the total purchase amount is greater than Rs. 5000, customers get a 10% discount on the total purchase amount.

Sample input  : purchase amount = 999
Sample output : total amount = 999

Sample input  : purchase amount = 2000
Sample output : total amount including 5% discount = 1900

Sample input  : purchase amount = 10000
Sample output : total amount including 10% discount = 9000
Sample Input
2000
Sample Output
1900
*/

#include "stdio.h"
int main(){

    int purchase;
    scanf("%d",&purchase);

    (purchase<1000) ? printf("Total amount = %d", purchase) :( (purchase >= 1000) && (purchase <= 5000) ) ? printf("Total amount including 5%% discount = %d", purchase -= purchase*5/100) : printf("Total amount including 10%% discount = %d",purchase -= purchase*10/100);
    return 0 ;
}
