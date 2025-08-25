/*Print First N Prime Numbers
Write a C program to print the first n prime numbers, where n is a positive integer entered by the user.

A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

The program must not use functions, and must use only for and while loops.

If the input is less than or equal to 0, print:
"Invalid input. Please enter a positive number."


Input Format:
-=-=--==-=-=-=
A single integer n, representing how many prime numbers to print.

Output Format:
-=-=-=-=-=-=-=-
If input is valid:
"First n prime numbers are:" followed by the primes on the same line separated by space.

If input is invalid:
"Invalid input. Please enter a positive number."

Sample Input
5
Sample Output
First 5 prime numbers are:
2 3 5 7 11
Constraints:
1 ≤ n ≤ 10000

*/


#include<stdio.h>
int main(){

    int n,count=0,Count=0;
    scanf("%d",&n);
     
     if(n==0){
        printf("Invalid input");
     }else if(n<0){
        printf("Invalid input. Please enter a positive number.");
     }else{

        printf("First %d prime numbers are:\n",n);

        for(int i = 2; n != Count; i++){


            for(int j = 2; j<i;j++){
                count =0;

                if(i%j==0){
                    count++;
                    break;
                }

            }
            if(count==0){
                printf("%d ",i);
                Count++;
            }


        }


     }



    return 0;
}