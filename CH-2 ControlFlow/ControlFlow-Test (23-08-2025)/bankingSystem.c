/*Question 1.

Banking_System_Menu
Question 2: Banking System Menu
Develop a simple banking menu system using switch statement for basic operations.

Hints:
- Menu options: 1-Check Balance, 2-Deposit, 3-Withdraw
- Initialize balance to some value (e.g., 1000.0)
- Display updated balance after each transaction
Sample Input:
Current Balance: 1000.0
Choose operation: 2
Enter deposit amount: 500.0

Sample Output:
Deposit successful!
Updated Balance: 1500.0
Sample Input
1
Sample Output
Your current balance: ₹1000.00


TestCase:

case 1: 

Input:
1

Expected Output:
Current Balance: 1000.0

case 2:

Input:
2 500

Expected Output:
Deposit successful!
Updated Balance: 1500.0

case 3:

Input:
3 300

Expected Output:
Withdrawal successful!
Updated Balance: 700.0


case 4:

Input:
3 2000

Expected Output:
Insufficient funds!

*/


#include<stdio.h>
int main(){

    int n; 
    float balance = 1000,deposit,withdrawl;
    scanf("%d",&n);

    switch(n){

        case 1: printf("Current Balance: %.1f",balance); break;

        case 2: scanf("%f",&deposit);
                balance += deposit;
                printf("Deposit successful!\n");
                printf("Updated Balance: %.1f",balance);
                break;
        
        case 3: scanf("%f",&withdrawl);
                if(withdrawl>balance){
                    printf("Insufficient funds!");
                    return 0;
                }else{
                    balance -= withdrawl;
                    printf("Withdrawal successful!\n");
                    printf("Updated Balance: %.1f",balance);
                }
                break;


    }


    return 0;
}