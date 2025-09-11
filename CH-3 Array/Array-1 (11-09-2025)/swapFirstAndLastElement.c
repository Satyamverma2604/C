/*
Question 4.


Swap First and Last Element of an Array
Write a program to swap the first and last element of a given array.

Input Format

First line: an integer n (size of the array).

Second line: n space-separated integers (array elements).

Output Format

Print the array after swapping the first and last element.
Sample Input
6
1 2 3 4 5 6
Sample Output
6 2 3 4 5 1


TestCases :

case 1:

Input:
6 1 2 3 4 5 6

Expected Output:
6 2 3 4 5 1

case 2:

Input:
5 10 20 30 40 50

Expected Output:
50 20 30 40 10


case 3:

Input:
2 7 9

Expected Output:
9 7

case 4:


Input:
1 5

Expected Output:
Array size too small to swap


case 5:

Input:
-3

Expected Output:
Invalid array size

*/



#include<stdio.h>
int main(){

    int array[100],size;
    
    scanf("%d",&size);
    if(size <= 0)
    {
        printf("Invalid array size");
        return 0;
    }
    else if(size == 1){
        printf("Array size too small to swap");
        return 0;
    }

    for(int i = 0; i<size; i++){
        int arrInp;
        scanf("%d",&arrInp);
        array[i] = arrInp;
    }


    int temp = array[0];
    array[0] = array[size-1];
    array[size-1] = temp;
    

    for(int i=0;i< size; i++){
        printf(" %d",array[i]);

    }



    return 0;
}
