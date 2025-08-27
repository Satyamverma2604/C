/*
Question 5.

Prime Number
[Title:- Prime Number Check]
----------------------------

(USING FOR LOOP)
Write a C program to check whether a given number is a prime number or not.

Test-Cases-1 :- Valid Prime Number
---------------
Input :-
--------
Enter a number: 7

Expected Output :-
-------------------
7 is a prime number.

Explanation :- 7 is divisible only by 1 and itself, making it a prime number.
--------------

Test-Cases-2 :- Invalid (Non-Prime) Number
---------------
Input :-
---------
Enter a number: 10

Expected Output :-
------------------
10 is not a prime number.

Explanation :- 10 is divisible by 1, 2, 5, and 10, so it is not a prime number.
--------------

Test-Cases-3 :- Invalid Input (Negative Number)
---------------
Input :-
--------
Enter a number: -5/0

Expected Output :-
------------------
Invalid input. Enter a positive integer.
Sample Input
7
Sample Output
7 is a prime number.

TestCases:

case 1:

Input:
5

Expected Output:
5 is a prime number.

case 2:

Input:
10

Expected Output:
10 is not a prime number.

case 3: 

Input:
-5

Expected Output:
Invalid input. Enter a positive integer.

*/

#include<stdio.h>
int main(){

    int n,count=0;
    scanf("%d",&n);
     
    if(n<=0){
        printf("Invalid input. Enter a positive integer.");
     }else{

        for(int i = 2; i<n ; i++){

                if(n%i==0){
                    printf("%d is not a prime number.",n);
                    exit(0);
                }


        }
        printf("%d is a prime number.",n);


     }



    return 0;
}