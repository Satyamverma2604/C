/*Q-1
-------
          Without using control statements Write a C program to determine the next or previous multiple of 10 for a given two-digit number. 
          The program should follow these rules:
          If the last digit of the given number is greater than or equal to 5, the program should print the next multiple of 10.
          If the last digit of the given number is less than 5, the program should print the previous multiple of 10..


Sample Input1  : int a = 34;
Sample Output1 : 30 

Sample Input2  : int  a = 25;
Output2 : 30

Sample Input3  : int a = 86;
Sample Output3 : 90
*/

#include<stdio.h>
int main()
{
int n;
printf("Enter a two digit number : ");
scanf("%d",&n);
int lastDigit = n%10,Ans;

Ans = (lastDigit>=5?  ((n/10)+1)*10:  ((n/10))*10);
printf("The round number is : %d", Ans);

}
