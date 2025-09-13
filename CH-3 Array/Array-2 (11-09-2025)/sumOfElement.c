/*
Question.2


Sum of Elements
-> Reads an integer N from the user to define the size of a dynamically allocated array.
-> Prompts the user to input N integer values into the array.
-> Calculates and prints the sum of all elements in the array.

Sample TestCase :-
--------------------------
Input :-
--------
Enter the size of the array: 6  
Enter 6 elements into the array:  
8  2  3  4  5  6  

Output :-
---------
The sum of all elements in the array is: 28  
Sample Input
5
-2  -4  -6  -8  -10
Sample Output
The sum of all elements in the array is: -30


TestCases:

case 1:

Input:
6 8 2 3 4 5 6

Expected Output:
The sum of all elements in the array is: 28

case 2:




Input:
5 -2 -4 -6 -8 -10

Expected Output:
The sum of all elements in the array is: -30


case 3:

Input:
0

Expected Output:
Invalid input. Array size must be greater than 0

case 4:

Input:
-5

Expected Output:
Invalid input. Array size must be a positive integer

*/


#include<stdio.h>
int main(){

    int array[100],size,sum=0;
    
    scanf("%d",&size);
    if(size < 0)
    {
        printf("Invalid input. Array size must be a positive integer");
        return 0;
    }else if(size == 0){
    printf("Invalid input. Array size must be greater than 0");
    return 0;
    }
    for(int i = 0; i<size; i++){
        int arrInp;
        scanf("%d",&arrInp);
        array[i] = arrInp;
    }
    

    for(int i=0;i< size; i++){

         sum+=array[i];
    }



    printf("The sum of all elements in the array is: %d",sum);
    return 0;


}
