/*Q-2
------

Write a C program to calculate the power of a base number raised to an exponent using a while loop. 
The program should take two inputs: the base and the exponent. If either the base or the exponent is zero or negative, 
the program should display the message "Invalid input...Please enter positive values" and terminate. Otherwise, 
the program should calculate and display the result as base^exponent = result.

Sample input  : Enter base: 2
                Enter exponent: -5
Sample output : Invalid input...Please enter positive values

----------------------------
Sample input  : Enter base: 2
                Enter exponent: 5
Sample output : 2^5 = 32
----------------------------

Sample input  : Enter base: 3
                Enter exponent: 4
Sample output : 3^4 = 81

*/

#include<stdio.h>
int main(){

    int base,power,ans = 1,powerCopy;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter Exponent: ");
    scanf("%d",&power);
    if(power<0){
        printf("Invalid input...Please enter positive values");
        return 0;
    }
    powerCopy = power;

    while (power != 0)
    {
       ans *= base;
       power --;
    }

    printf("%d ^ %d is : %d", base, powerCopy,ans);
    

    return 0;
}