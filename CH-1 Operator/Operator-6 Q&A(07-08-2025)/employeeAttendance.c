/*Employee Attendance Check
A company decides to reward employees with a bonus if their monthly attendance is satisfactory. An employee is eligible for the bonus if their attendance percentage is greater than or equal to 75%.

Given the total number of working days in a month and the number of days the employee was present, write a program to determine whether the employee is eligible for the bonus.

Take two inputs: presentDays and totalDays.
If attendance is >= 75%, employee is eligible for bonus.

Input Format:
------------------
Take two inputs: presentDays and totalDays.
If attendance is >= 75%, employee is eligible for bonus.


Print "Eligible for bonus" if attendance percentage is ≥ 75%.

Output Format:
-------------------
Print "Not eligible for bonus" if attendance percentage is < 75%.
Sample Input
20 16
Sample Output
Eligible for bonus
Constraints:
0 <= presentDays <= 1000

1 <= totalDays <= 1000
*/

#include<stdio.h>
int main(){

    int persentDays, totalDays;
    scanf("%d %d",&totalDays, &persentDays);    
   persentDays >=  (float)(totalDays*75)/100 ? printf("Eligible for bonus") : printf("Not eligible for bonus");

    return 0;

}