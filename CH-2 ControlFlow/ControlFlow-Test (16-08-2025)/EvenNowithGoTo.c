/*Question 5.


EvenNumbers_With_Goto
write a C program that prints all even numbers from 1 to a user-given number N using goto and labels.

input :
 Enter a number : 10
output :
  1 to 10 even numbers are : 2 4 6 8 10
Sample Input
10
Sample Output
 1 to 10 even numbers are : 2 4 6 8 10
 */

 #include<stdio.h>
int main(){

    int n;
    int start = 1;
    scanf("%d",&n);
    if(n>0){
        printf("1 to %d even numbers are: ",n);
        start1:
        if(start<=n){
            if(start % 2 == 0){

            printf("%d ",start);
            }
            start++;
            goto start1;
        }
        
    }else if(n<0){
         printf("1 to %d even numbers are: ",n);
         n = -n;
        start2:
        if(start<=n){
            if(start % 2 == 0){

            printf("-%d ",start);
            }
            start++;
            goto start2;
        }
    }else {

        printf("invalid!.");
    }
    
    return 0;
}