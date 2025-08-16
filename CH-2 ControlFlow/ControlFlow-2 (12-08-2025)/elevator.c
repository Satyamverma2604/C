/*Q-1
----------
An elevator can hold 500 kg max. Each adult weighs 75 kg, each child weighs 30 kg.
Write a program to check if the total weight is within the limit.

Example:
Input: Adults = 4, Children = 3  
Output: Safe to move

Input: Adults = 6, Children = 5  
Output: Overload! Reduce weight.
*/

#include<stdio.h>
int main(){

    int adults,children,load;
    printf("Enter no of adults: ");
    scanf("%d",&adults);
    printf("Enter no of children: ");
    scanf("%d",&children);
    load = (adults*75) + (children*30);
    if(load <= 500){
        printf("Safe to move");
    }else{
        printf("Overload! Reduce weight.");
    }


    return 0;
}