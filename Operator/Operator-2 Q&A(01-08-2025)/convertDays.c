/*Q-3
------
Write a 'C' program to take the number of days and convert into (days:months:years)

Sample input  : int days = 500

Sample Output :  1 year 4 month and 15 days. 

Q-4
-------
Write a 'C' program to take the number of seconds and convert into (H:M:S)
-------

Sample input  : int seconds = 3665

Sample Output : 1 hour 1 minute and 5 second

*/

#include<stdio.h>
int main()
{
int n;
printf("Enter a number to convert it into years , months and Days : ");
scanf("%d",&n);
int year,month,day;
year = n/365;
n= n - 365*year;
month = n/12;
n = n - month*12;
day = n;
printf("The Answer is %d Year, %d Months , %d Days",year,month,day);

}