/*
Question 2.

MultiplicationTableUsingForLoop

Write a program in C to display the multiplication table for a given integer. 



Test Data :

Input the number (Table to be calculated) : 15

Expected Output :

15 X 1 = 15

...

...

15 X 10 = 150
Sample Input
5
Sample Output
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50


TestCases:

case 1:

Input:
1

Expected Output:
1 X 1 = 1
1 X 2 = 2
1 X 3 = 3
1 X 4 = 4
1 X 5 = 5
1 X 6 = 6
1 X 7 = 7
1 X 8 = 8
1 X 9 = 9
1 X 10 = 10


case 2:

Input:
12

Expected Output:
12 X 1 = 12
12 X 2 = 24
12 X 3 = 36
12 X 4 = 48
12 X 5 = 60
12 X 6 = 72
12 X 7 = 84
12 X 8 = 96
12 X 9 = 108
12 X 10 = 120


case 3:

Input:
-6

Expected Output:
Negative value not allowed.

*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Negative value not allowed.");
        return 0;
    }
    for(int i=1; i<=10; i++){

        printf("%d X %d = %d\n",n,i,n*i);

    }


    return 0;
}
