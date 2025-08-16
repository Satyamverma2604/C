/*3.swap two number without using third  variable.
---> input as int a = 10 , b = 20;
     output as  a = 20 , b = 10;  */

     #include<stdio.h>
int main(){
    int a = 10, b = 20;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a is %d and the value of b is %d", a,b);
    return 0;
}