/*
Question 2.



StoreAndPrintElements
Write a program in C to store elements in an array and print it.
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1


Input Format  : 1st take the size of an Array and after that take all the elements based on the array size

Output Format : print all the stored Elements of an Array
Sample Input
10 1 2 3 4 5 6 7 8 9 10
Sample Output
1 2 3 4 5 6 7 8 9 10



TestCases:

case 1:

Input:
3 1 2 3

Expected Output:
1 2 3



case 2:

Input:
5 3 4 5 6 7

Expected Output:
3 4 5 6 7


case 3:


Input:
-5

Expected Output:
Invalid Input
*/



#include<stdio.h>
int main(){

    int array[100],size;
    
    scanf("%d",&size);
    if(size <= 0)
    {
        printf("Invalid Input");
        return 0;
    }

    for(int i = 0; i<size; i++){
        int arrInp;
        scanf("%d",&arrInp);
        array[i] = arrInp;
    }

    for(int i=0;i< size; i++){

           
        printf("%d ",array[i]);

    }

    return 0;
}
