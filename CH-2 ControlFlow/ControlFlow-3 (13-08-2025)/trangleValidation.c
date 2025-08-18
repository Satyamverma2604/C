/*Question 3.


TriangleValidation
Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
  
         Validity Check:
         If all three sides are equal then the triangle is equilateral.
         If exactly two sides are equal then the triangle is isosceles.
         If all sides are different then the triangle is scalene.
Sample Input
Sample input :  Enter the lengths of the three sides of the triangle:
                Side 1: 3
                Side 2: 3
                Side 3: 3
Sample Output
Sample output : The triangle is equilateral.


*/





#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b)){

        if((a == b) && (b == c)){
            printf("The triangle is an equilateral triangle.");
        }else if(a!=b && a!=c && b!=c){
            printf("The triangle is a scalene triangle.");
        }else{
            printf("The triangle is an isosceles triangle.");
        }


    }else{
        printf("The lengths do not form a valid triangle.");
    }

    return 0;
}


