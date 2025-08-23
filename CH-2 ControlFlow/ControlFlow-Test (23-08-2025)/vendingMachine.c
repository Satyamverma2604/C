/*Question 3.


Vending_Machine_Simulator
Question 3: Vending Machine Simulator
Simulate a vending machine operation using switch statement for product selection and payment processing.

Hints:
- Products: 1-Soda(30₹), 2-Chips(15₹), 3-Candy(10₹), 4-Water(20₹)
- Handle payment validation and change calculation
- Track inventory for each product
- Display transaction details and remaining change

Sample Input:
Select product: 2
Insert money: 20

Sample Output:
Product: Chips - 15
Payment: 20
Change: 5
Transaction successful! Enjoy your chips!
Sample Input
2
20
Sample Output
Product: Chips - 15₹
Payment: 20₹
Change: 5₹


TestCase:

case 1:


Input:
2 20

Expected Output:
Product: Chips - 15₹
Payment: 20₹
Change: 5₹
Transaction successful! Enjoy your Chips!


case 2:

Input:
3 5

Expected Output:
Insufficient money! Transaction cancelled.


case 3:

Input:
4 20

Expected Output:
Product: Water - 20₹
Payment: 20₹
Change: 0₹
Transaction successful! Enjoy your Water!


case 4:

Input:
5

Expected Output:
invalid input!

case 5:

Input:
1 30

Expected Output:
Product: Soda- 30₹
Payment: 30₹
Change: 0₹
Transaction successful! Enjoy your Soda!

*/



#include<stdio.h>
int main(){

    int product,payment;
    scanf("%d",&product);
    scanf("%d",&payment);
    switch(product){

        case 1: if(payment<30){
            printf("Insufficient money! Transaction cancelled.");
            return 0;
            }else{

            printf("Product: Soda- 30₹\n");
                printf("Payment: %d₹\n",payment);
                printf("Change: %d₹\n",payment-30);
                printf("Transaction successful! Enjoy your Soda!");
                break;
        }
        case 2: if(payment<15){
            printf("Insufficient money! Transaction cancelled.");
            return 0;
            }else{

            printf("Product: Chips - 15₹\n");
                printf("Payment: %d₹\n",payment);
                printf("Change: %d₹\n",payment-15);
                printf("Transaction successful! Enjoy your Chips!");
                break;
        }
        case 3: if(payment<10){
            printf("Insufficient money! Transaction cancelled.");
            return 0;
            }else{

            printf("Product: Candy - 10₹\n");
                printf("Payment: %d₹\n",payment);
                printf("Change: %d₹\n",payment-10);
                printf("Transaction successful! Enjoy your Candy!");
                break;
        }
        case 4: if(payment<20){
            printf("Insufficient money! Transaction cancelled.");
            return 0;
            }else{

            printf("Product: Water - 20₹\n");
                printf("Payment: %d₹\n",payment);
                printf("Change: %d₹\n",payment-20);
                printf("Transaction successful! Enjoy your Water!");
                break;
        }

        
        default : printf("invalid input!");


    }


    return 0;
}