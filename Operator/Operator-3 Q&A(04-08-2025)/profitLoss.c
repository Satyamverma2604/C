/*Que 2 :  A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged. 
-------  Write a C program to Display total selling price, profit along with vat and service charge.
         To calculate the selling price, profit, VAT, and service charge, follow these steps:

         1) Calculate the selling price:

            Selling Price = Cost Price + Profit

            Selling Price = Rs. 3500 + (27% of Rs. 3500)


         2) Calculate the profit:

            Profit = Selling Price - Cost Price


         3) Calculate VAT:

            VAT = 12.7% of Selling Price


         4) Calculate Service Charge:

            Service Charge = 3.87% of Selling Price*/

#include<stdio.h>
int main(){
    
    float buyP,sellP,profit,vat,serviceC,totalP;
    printf("Enter the  buy  price of TV : ");
    scanf("%f",&buyP);
    
    sellP = buyP + (buyP*27)/100;
    profit = sellP - buyP;
    vat = (sellP*12.7)/100;
    serviceC = (sellP*3.87)/100;
    totalP = sellP+vat+serviceC;
    
    printf("The total selling price is %.2f along with %.2f profit , %.2f VAT and  %.2f service Charge",totalP,profit,vat,serviceC);
    
    
    
    return 0;
}
