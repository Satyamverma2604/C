/*
Que 1 :
--------
Write a C program to print the number of odd numbers and their sum between 1 and a given number n using a for loop.

Input :
	Enter a number : 10
output :
	1 to 10 odd numbers is : 1 3 5 7 9
	sum of numbers is  = 25
    
*/


#include<stdio.h>
int main(){
    
    int n,sum=0;
    printf("Enter a Positive number: ");
    scanf("%d",&n);

    if(n<0){

        printf("Invalid  Input!");
        return 0;
    }
    printf(" 1 to %d odd numbers is :",n);

   for(int i = 1; i<=n; i++){

    if(i%2==1){
        printf("%d ",i);
        sum+=i;
    }

    
}
printf("\nsum of numbers is = %d",sum);


    return 0;
}