/*
Q5. Power of a Number

Find x^y using a for loop.
Example:
Input: x=2, y=5 → Output: 32

*/


#include<stdio.h>
int main(){

    int n,a;
    float power = 1;
    printf("Enter two numbers for a^b: \n");
    scanf("%d %d",&n,&a);

    if(a==0){
        printf("The power is : 1\n");
        return 0;
    }
   
    if(a>0){
    for(int i = 1; i<=a; i++){

        power*=n;

    }
   }else{
    for(int i = -1; i>=a; i--){

        power*=n;

    }

    power = 1/power;

   }
    printf("The power of %d ^ %d is : %f\n",n,a,power);
   
    
    return 0;
}