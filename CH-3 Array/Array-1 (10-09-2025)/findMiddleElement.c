/*

Question 3.



Find Middle Element(s) of an Array
Write a program to find the middle element(s) of a given array.

If the array size is odd, print only the middle element.

If the array size is even, print both middle elements.

Note: Middle elements should be found using index calculation.

Input Format

First line: an integer n (size of the array).

Second line: n space-separated integers (array elements).

Output Format

If odd → print single middle element.

If even → print both middle elements.
Sample Input
5
1 2 3 4 5
Sample Output
3


TestCases:

case 1:

Input:
5 1 2 3 4 5

Expected Output:
3

case 2:

Input:
6 1 2 3 4 5 6

Expected Output:
3 4


case 3:

Input:
-5

Expected Output:
Invalid array size

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
    if(size <= 0)
    {
        printf("Invalid array size");
        return 0;
    }

    for(int i = 0; i<size; i++){
        int arrInp;
        scanf("%d",&arrInp);
        array[i] = arrInp;
    }

    for(int i=0;i< size; i++){

            if(size%2!=0){
            printf("%d",array[size/2]);
            return 0;
            }
            else{
                printf("%d %d",array[size/2-1],array[size/2]);
                return 0;
            }

    }

    return 0;
}