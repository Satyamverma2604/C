/*

Question. 1



Searching Element Indices
Write a C program to find the element given by user is present in the 

array or not 

If the element is present in the array also programmer have to print 

index position of that searching element.

If the user pass the element for searching in the array is not present

then also provide a appropriate message to the user that element is not 

present inside the array.


Input 1:-

[1,2,3,4,5,6,7]


Enter the number you want to search : 5


Output :-


The element which you have sreached is present inside the 4rth index 


Input 2:-

[1,2,3,4,3,6]


Enter the number you want to search : 9


Output :


The element which you have sreached is not present inside the Array.
Sample Input
7
1
2
3
4
5
6
7
5
Sample Output
The element which you have sreached is present inside the 4 index

TestCases:

case 1:

Input:
7 1 2 3 4 5 6 7 5

Expected Output:
The element which you have searched is present inside the 4 index

case 2:

Input:
6 1 2 3 4 3 6 9

Expected Output:
The element which you have searched is not present inside the Array.

case 3:

Input:
5 10 20 30 40 50 30

Expected Output:
The element which you have searched is present inside the 2 index

case 4:

Input:
4 7 8 9 10 11

Expected Output:
The element which you have searched is not present inside the Array.

case 5:

Input:
8 5 3 2 8 9 7 6 1 1

Expected Output:
The element which you have searched is present inside the 7 index

case 6:

Input:
-6

Expected Output:
Invalid Arrays Size

*/


#include<stdio.h>
int main(){

    int array[100],size;
    
    scanf("%d",&size);
    if(size <= 0)
    {
        printf("Invalid Arrays Size");
        return 0;
    }
    for(int i = 0; i<size; i++){
        int arrInp;
        scanf("%d",&arrInp);
        array[i] = arrInp;
    }
    int search ;
    scanf("%d",&search);

    for(int i=0;i< size; i++){

            if(array[i] == search){
            printf("The element which you have searched is present inside the %d index",i);
            return 0;
            }


}
    printf("The element which you have searched is not present inside the Array.");
    return 0;


}
