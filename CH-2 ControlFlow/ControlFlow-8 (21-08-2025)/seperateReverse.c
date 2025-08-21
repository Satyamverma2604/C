/*Write a C program that takes a  integer as input and prints its each  digits in separate line reverse order using a while loop.


case 1:
-------
input :
	Enter a number : 1234

output : 
	4
	3
	2
	1
    */

    #include<stdio.h>
int main(){

    int n , r;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse of the given number is : \n");
    if(n<0) printf("-", n = -n);
   do{
        r = n % 10;
        printf("%d\n",r);
        n /= 10;
    } while (n!=0);
    
    return 0;
}