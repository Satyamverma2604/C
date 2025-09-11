/*
Question 1.


Print Even and Odd Elements Separately
Write a program to print all even elements and all odd elements separately from a given array.

Input Format

First line: an integer n (size of the array).

Second line: n space-separated integers (array elements).

Output Format

Print even elements in one line as:
Even elements are : e1 e2 e3 ...

Print odd elements in another line as:
Odd elements are : o1 o2 o3 ...
Sample Input
7
1 2 3 4 5 6 7
Sample Output
Even elements are : 2 4 6
Odd elements are : 1 3 5 7

TestCases: 

case 1:

Input:
7 1 2 3 4 5 6 7

Expected Output:
Even elements are : 2 4 6
Odd elements are : 1 3 5 7


case 2: 

Input:
5 10 15 20 25 30

Expected Output:
Even elements are : 10 20 30
Odd elements are : 15 25


case 3:

Input:
4 2 4 6 8

Expected Output:
Even elements are : 2 4 6 8
Odd elements are :


case 4:

Input:
0

Expected Output:
Invalid array size


*/



#include<stdio.h>
int main(){

    int array[100],size;
    
    scanf("%d",&size);
    if(size == 0)
    {
        printf("Invalid array size");
        return 0;
    }

    for(int i = 0; i<size; i++){
        int arrInp;
        scanf("%d",&arrInp);
        array[i] = arrInp;
    }
    printf("Even elements are :");

    for(int i=0;i< size; i++){

            if(array[i]%2==0)
            printf(" %d",array[i]);

    }printf("\n");
    printf("Odd elements are :");

    for(int i=0;i< size; i++){

            if(array[i]%2!=0)
            printf(" %d",array[i]);

    }



    return 0;
}
