/*

Q6. Sum of an Arithmetic Progression (AP)

Find sum of first N terms of AP.
Example:
Input: a=2, d=3, N=5 → Sequence: 2 5 8 11 14 → Sum=40

*/

#include<stdio.h>
int main(){

    int n,a =2 ,d = 3,sum=0;
    printf("Enter a number: \n");
    scanf(" %d",&n);
    if(n==0){
        printf("Invalid input.");
        return 0;
    }
    printf("Sequence : ");
    
    for(int i = 1; i <= n; i++){
        printf(" %d",a);
        sum += a;
        a += d;
    }
    
    printf("\nSum is : %d",sum);
    return 0;
}