/*
Ques - 2
---------------
Find All Palindrome Numbers in a Range  by using nested for loop and while loops.
Problem: Print all palindrome numbers between 1 and 1000.

Outer for → pick each number in range
Inner for → reverse digits

Example Output:
1 2 3 ... 121 131 ... 999

*/


#include<stdio.h>
int main(){


    int n;
    printf("Enter a range for Palindrome Number: \n");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        int rev = 0;
        int a = i;

        for(int j=i; j!=0 ; j/=10){

            int lastD = j%10;
            rev = (rev*10)+lastD;

        }

        if(rev == a)
        printf(" %d",a);



    }

    return 0;
}