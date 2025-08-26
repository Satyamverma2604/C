/*
Que 4 :
--------
Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

Input the number of terms : 5

Expected Output :

1 + 11 + 111 + 1111 + 11111

The Sum is : 12345

*/


#include<stdio.h>
int main(){

    int n,num =1;
    long sum = 0;
    printf("Enter a nunber: ");
    scanf("%d",&n);

    for(int i = 1; i<= n; i++){

        if(num==1){
            printf("1");
            sum+=num;
            num = num*10+1;
            continue;
        }

        sum+=num;
        printf(" + %d",num);
        num = num*10+1;


    }

    printf("\b\b\nThe sum is : %ld",sum);




    return 0;
}