/*Q-2
-------
Check Automorphic Number
A number is automorphic if its square ends with the number.
Example: 25² = 625 → ends with 25.

Condition: Square ends with the number

Input (n)	Square (n²)	   Ends With?		   Output
5				25		Yes (ends with 5)	Automorphic
6				36		Yes (ends with 6)	Automorphic
25				625		Yes (ends with 25)	Automorphic
76				5776	Yes (ends with 76)	Automorphic
7				49		No (ends with 9)	Not Automorphic
11				121		No (ends with 21)	Not Automorphic

*/



#include<stdio.h>
int main(){

 int n,square;
 printf("Enter your number: ");
 scanf("%d",&n);
 square = n*n;

 while (n>0)
 {
    if(square%10 != n%10){
        printf(" Not Automorphic");
        return 0;
    }
    
    square /= 10;
    n /= 10;
}

printf("Automorphic");


    return 0;
}