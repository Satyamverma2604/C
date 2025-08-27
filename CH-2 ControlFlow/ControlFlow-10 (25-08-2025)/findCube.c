/*
Question 4.

FindCube
Write a program in C to display the cube of the number up to an integer.



Test Data :

Input number of terms : 5

Expected Output :

Number is : 1 and cube of the 1 is :1

Number is : 2 and cube of the 2 is :8

Number is : 3 and cube of the 3 is :27

Number is : 4 and cube of the 4 is :64

Number is : 5 and cube of the 5 is :125
Sample Input
3
Sample Output
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27

TestCases:

case 1: 

Input:
3

Expected Output:
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27

case 2:

Input:
1

Expected Output:
Number is : 1 and cube of the 1 is :1


case 3:

Input:
5

Expected Output:
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125

case 4:

Input:
-7

Expected Output:
Negative value not allowed.

*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
     
    if(n<0){
        printf("Negative value not allowed.");
     }else{

        for(int i = 1; i<=n; i++){

           printf("Number is : %d and cube of the %d is :%d\n",i,i,(i*i*i));
        }

     }

    return 0;
}