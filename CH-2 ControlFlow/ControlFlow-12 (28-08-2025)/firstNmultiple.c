/*
3.  Print Multiples of a Number

Print the first N multiples of a number.
Example:
Input: x = 7, N = 5 → Output: 7 14 21 28 35

*/


#include<stdio.h>
int main(){

    int n,a;
    printf("Enter two numbers first for multiple second for till term of multiple: \n");
    scanf("%d %d",&n,&a);

    if(n<=0 || a<=0){
        printf("Invalid input please enter a positive number.");
        return 0;
    }

    for(int i = 1; i<=a; i++){

        printf("%d X %d = %d\n",n,i,n*i);

    }
   
    
    return 0;
}