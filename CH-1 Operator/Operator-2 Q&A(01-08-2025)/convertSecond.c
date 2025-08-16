/*Q-4
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
printf("Enter a number to convert it into Hours , minutes and Seconds : ");
scanf("%d",&n);
int hour,min,sec;
hour = n/3600;
n = n - hour*3600;
min = n/60;
n = n - min*60;
sec = n;
printf("The Answer is %d Hour, %d Minutes , %d Seconds",hour,min,sec);

}  