/*
Ques - 4
-------------------
Print All Perfect Numbers in a Range by using nested for loops.

Problem: A perfect number is one where the sum of divisors (excluding itself) equals the number.
Write a program to find all perfect numbers between 1 and 1000.

Outer for → numbers 1 to 1000
Inner for → sum divisors

Example Output:
6 28 496
*/


#include<stdio.h>
int main(){


    int n;
    printf("Enter a range for Perfect Number: \n");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        int sum = 0;
        int a = i;
        
        for(int j = 1; j<i; j++){
            if(i%j==0)
            sum+=j;
        }

        if(sum == i)
        printf(" %d",i);

    }

    return 0;
}