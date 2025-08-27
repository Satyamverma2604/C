/*
Q-5
-----
Odd Number Printer
Create a program that prints all odd numbers from 1 to a given number using do-while loop.

Hints:
- Start with 1 (first odd number)
- Check if number is odd using modulo operator (% 2!= 0)
- Continue until number exceeds the limit

Sample Input:
Enter limit: 10

Sample Output:
Odd numbers up to 10:
1 3 5 7 9

*/


#include<stdio.h>
int  main(){

    int n,start = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Odd numbers up to %d: \n",n);

    do{
        if(start % 2 ==1){

            printf("%d ",start);

        }
        start++;
        
        
    }while(start!=n);


    return 0;
}