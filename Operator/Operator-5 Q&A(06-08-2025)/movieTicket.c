/*Movie_Ticket
Discount on Movie Ticket Based on Age and Type
Problem:
A movie theater gives:
50% discount to children (age < 12)
30% discount to students (age 12-25)
No discount to others
Write a program using ternary operator to compute and print final price of a ticket.

Example I/O :
Input: price=200, age=10  → Output: Final ticket price: 100.00  
Input: price=200, age=20  → Output: Final ticket price: 140.00  
Input: price=200, age=30  → Output: Final ticket price: 200.00  

Sample Input
200 10
Sample Output
Final ticket price: 100.00
*/

#include<stdio.h>
int main(){

    float price , age;
    scanf("%f %f", &price, &age);

    (age < 12 ) ? printf("Final ticket price: %.2f", price -= price*50/100) : (age >= 12) && (age < 25) ? printf("Final ticket price: %.2f", price -= price*30/100) : printf("Final ticket price: %.2f", price);


    return 0;

}