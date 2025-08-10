/*2.swap two number by using third variable.
---> input as int a = 10 , b = 20;
          output as  a = 20 , b = 10;
*/



#include<stdio.h> 
int main(){
    int a = 10 , b = 20;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("the value of a is %d and the value of b is %d",a ,b);

        return 0;
}