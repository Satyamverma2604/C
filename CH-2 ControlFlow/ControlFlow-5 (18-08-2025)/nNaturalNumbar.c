/*Que 1 :
========

Write a C program to print N natural numbers in reverse order using simple if and goto statments.

Sample input : 5
Sample Output : 5 4 3 2 1

Sample input : 7
Sample Output : 7 6 5 4 3 2 1

Sample input : -5
Sample Output : Invalid Input.

Sample input : 0
Sample Output : Invalid Input.
*/

#include<stdio.h>
int main(){

    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    
    if(n<=0){
        printf("Invalid number!");
        return 0;
    }
        start:
     if(n>0){
        printf("%d ",n);
        n--;
     goto start;
    }else{
      return(0);
    }
        
    


    return 0;
}