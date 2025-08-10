/*Question.1


Payroll_System

Devlop a program on a payroll system for a company. The system needs to calculate the salary of an employee based on their employee type ('M' for manager or 'H' for HR employee) and their basic salary. 
For managers, their salary should be increased by 10% as a performance bonus and for HR  increased by 5% . Write a C program that takes the employee type and basic salary as inputs and calculates the increased salary using the ternary operator.

 Test Cases:

Input: M, 50000      → Output: Final Salary with 10% bonus = 55000.00  
Input: H, 40000      → Output: Final Salary with 5% bonus = 42000.00  
Input: X, 30000      → Output: Invalid Employee Type. Salary unchanged = 30000.00  
Sample Input
M 50000
Sample Output
Final Salary with 10% bonus = 55000.00
Explanation
Explanation Input Handling: The program takes employee type (M or H) and basic salary as input.
 A space before %c in scanf(" %c", &empType) ensures correct character input (avoids issues with leftover \n). 
 Bonus Calculation (Using Ternary Operator): If empType == 'M', salary is increased by 10% (basicSalary * 1.10). 
 If empType == 'H', salary is increased by 5% (basicSalary * 1.05). For any other input, the salary remains unchanged. Output: 
 Prints the final salary with the appropriate bonus message. If the employee type is invalid, it displays an error message.
*/

#include<stdio.h>
int main(){

char position;
float salary;
scanf("%c %f",&position,&salary);

 (position == 'M') ? printf("Final Salary with 10%% bonus = %.2f",salary+= salary*10/100) : (position == 'H') ? printf("Final Salary with 5%% bonus = %.2f",salary += salary*5/100): printf("Invalid Employee Type. Salary unchanged = %.2f",salary);


    return 0;
}

