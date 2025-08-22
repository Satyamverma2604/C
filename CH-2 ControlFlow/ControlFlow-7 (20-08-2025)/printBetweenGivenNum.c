/*Question 5.


PrintBetweemGivenNumber
Write a C program using a while loop that reads two integers, N1 and N2, from the user. The program should print all the numbers from N1 to N2 (inclusive) in a single line, separated by commas.

Sample-run :-
--------------

Test Case-1 :- [Basic Range]
--------------  
Input :-
--------
N1 = 1, N2 = 10

Expected Output :-
------------------
1,2,3,4,5,6,7,8,9,10

Test Case-2 :- [Negative to Positive Range]
--------------
Input :-
--------
N1 = -5, N2 = 5

Expected Output :-
------------------
-5,-4,-3,-2,-1,0,1,2,3,4,5

Test Case-3 :- [Single Number (N1 = N2)]
--------------
Input :-
--------
N1 = 7, N2 = 7

Expected Output :-
------------------
7

Test Case 4 :- [Reverse Input (N1 > N2)]
--------------
Input :-
--------
N1 = 10, N2 = 1

Expected Output :-
-------------------
Invalid input. N1 should be less than or equal to N2.

Test Case 5 :- [Zero Range]
--------------
Input :-
--------
N1 = 0, N2 = 3

Expected Output :-
------------------
0,1,2,3

Test Case 6 :- [Negative Range]
--------------
Input :-
---------
N1 = -10, N2 = -5

Expected Output :-
-------------------
-10,-9,-8,-7,-6,-5

Test Case 7 :- [Same Start and End with Negative Value]
--------------
Input :-
--------
N1 = -2, N2 = -2

Expected Output :-
------------------
-2
Sample Input
1
10
Sample Output
1,2,3,4,5,6,7,8,9,10

*/



#include<stdio.h>
int main(){

    int N1,N2;
    scanf("%d %d",&N1,&N2);
    if(N1>N2){
        printf("Invalid input. N1 should be less than or equal to N2.");
        return 0;
    }

    while(N1<=N2){
        if(N1<N2)
        printf("%d,",N1);
        else 
        printf("%d",N2);
        N1++;
        
    }



    return 0;
}