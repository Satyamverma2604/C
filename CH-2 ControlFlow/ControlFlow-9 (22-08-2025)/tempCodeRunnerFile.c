#include<stdio.h>
int main(){

 int n,square,sum=0;
 printf("Enter your number: ");
 scanf("%d",&n);
 square = n*n;
 while(square>0){
    sum += square%10;
    square/10
 }
if(sum == n)
printf("%d is neon number",n);
else 
printf("%d is not a neon number",n);

    return 0;
}