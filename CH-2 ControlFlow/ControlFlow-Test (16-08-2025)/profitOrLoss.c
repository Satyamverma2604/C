/*Question 2.


Profit_Or_Loss
write a C program takes the cost price and selling price of an item as input and prints whether the transaction was profitable or loss-making.

Sample input  :
	Cost Price: 100
	Selling Price: 150

Expected Output: 
	The transaction was profitable.
Sample Input
100 150
Sample Output
The transaction was profitable.
*/

#include<stdio.h>
int main(){

    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(sp>cp){
        printf("The transaction was profitable.");
    }else if(cp==sp){
        printf("No profit, no loss.");

    }else{
        printf("The transaction was loss-making.");
    }


    return 0;
}