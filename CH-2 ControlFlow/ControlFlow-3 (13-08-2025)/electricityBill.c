/*Question 1.

ElectricityBill

[Title: Electricity Bill Calculator -Using else-if ladder]
----------------------------------------------------------
Write a C program to input electricity unit charges and calculate the total electricity bill according to the following conditions:[using ternary-operator]

-> For the first 50 units: Rs. 0.50 per unit
-> For the next 100 units: Rs. 0.75 per unit
-> For the next 100 units: Rs. 1.20 per unit
-> For units above 250: Rs. 1.50 per unit

Additionally, a surcharge of 20% is added to the bill.

Sample Input :-
---------------
Enter the number of units: 280

Sample Output :-
-----------------
Total electricity bill: Rs. 318.00
Sample Input
Enter the number of units: 280
Sample Output
Total electricity bill: Rs. 318.00
*/

#include<stdio.h>
int main(){

    int unit;
    float bill,TotalBill;
    scanf("%d",&unit);
    bill = (unit <= 50) ? unit*0.5 : (unit <= 150) ? (50*0.5) + (unit - 50) *0.75 :  (unit <= 250) ? (50*0.5+100*0.75)+ (unit -150) * 1.2 : (50*0.5+100*0.75+100*1.2)+ (unit - 250) * 1.5;

    TotalBill = bill+( bill*0.2);
    printf("Total electricity bill: Rs. %.2f",TotalBill);


    return 0;
}