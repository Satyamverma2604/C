/*Question 1.

Prev_Next_Multiple
Write a C program to find the previous multiple & next multiple of 100 of a given three digit number using if-else. 
if the number is not 3 digit print invalid massage.

Sample input  : 234

Sample output : Previous multiple : 200
		                    next multiple : 300
Sample Input
234
Sample Output
Previous multiple : 200
next multiple : 300
*/

#include<stdio.h>
int main(){

    int n,a,count=0;
    scanf("%d",&n);
    a = n;
   start:
    if(n>0){
        n/=10;
        count ++;
        goto start;
    }
    if(count == 3){
        printf("Previous multiple : %d\n",((a/100))*100);
        printf("next multiple : %d",((a/100)+1)*100);

    }else{
        printf("Invalid Input");
    }

    return 0;
}
