/*Question 4.

BonusEligibility
Write a C program using else if statements to determine the type of bonus an employee is eligible for based on their years of service.
-Read year on service from the user.

- If an employee has less than 2 years of service, they are not eligible for a bonus.
- If an employee has between 2 and 4 years of service, they are eligible for a 10% bonus.
- If an employee has between 5 and 9 years of service, they are eligible for a 15% bonus.
- If an employee has 10 or more years of service, they are eligible for a 20% bonus.

 Case 1:
Input: 
	Enter years Of Service = 12
Output: 
	Employee is eligible for a 20% bonus

 Case 2:
Input: 
	Enter years Of Service = 7
Output: 
	Employee is eligible for a 15% bonus

 Case 3:
Input:
	 Enter years Of Service = 3
Output:
	 Employee is eligible for a 10% bonus

 Case 4:
Input: 
	Enter years Of Service = 1
Output:
	 Employee is not eligible for a bonus
Sample Input
12
Sample Output
20% bonus
*/

#include<stdio.h>
int main(){

    int year;
    scanf("%d",&year);
    if(year<2){
        printf("Not Eligible");
    }else if(year >= 2 && year <=4){
        printf("10%% bonus");
    }else if(year >=5 && year <=9){
        printf("15%% bonus");
    }else{
        printf("20%% bonus");
    }


    return 0;
}