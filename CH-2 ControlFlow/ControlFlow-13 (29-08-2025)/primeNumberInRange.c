/*

Ques - 3
-----------------
Find Prime Numbers in a Range  by using nested for loop.

Problem: Write a program to print all prime numbers between 1 and 50 using nested for loops.
Outer for → goes through numbers 1 to 50
Inner for → checks if a number is prime

Example Output:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

*/

#include<stdio.h>
int main(){


    int n;
    printf("Enter a range for prime Number: \n");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        int count = 0;
        
        for(int j = 1; j<= i; j++){
            
            if(i%j==0)
            count++;

        }

        if(count == 2)
        printf(" %d",i);

    }
    return 0;
}