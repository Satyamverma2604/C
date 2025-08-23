/*Question 2.


Simple_Calculator
Create a calculator program that performs basic arithmetic operations (+, -, *, /, %) based on user input using switch statement.

Hints:
- Take two numbers and one operator as input
- Display error message for invalid operators

Sample Input:
15.5 4.5  +

Sample Output:
15.5 + 4.5 = 20.0
Sample Input
15.5 4.5 +
Sample Output
15.5 + 4.5 = 20.0


Tese cases:

case 1:

20 7.5 -

Expected Output:
20.0 - 7.5 = 12.5

case 2:

Input:
15.5 4.5 +

Expected Output:
15.5 + 4.5 = 20.0

case 3:

Input:
6 8 *

Expected Output:
6.0 * 8.0 = 48.0

case 4:

Input:
15 3 /

Expected Output:
15.0 / 3.0 = 5.0

*/

#include<stdio.h>
int main(){

    float a,b;
    char ch;

    scanf("%f %f",&a,&b);
    scanf(" %c",&ch);

    switch(ch){

        case '+': printf("%.1f + %.1f = %.1f",a,b,(a+b)); break; 
        case '-': printf("%.1f - %.1f = %.1f",a,b,(a-b)); break; 
        case '*': printf("%.1f * %.1f = %.1f",a,b,(a*b)); break; 
        case '/': printf("%.1f / %.1f = %.1f",a,b,(a/b)); 
        

    }



    return 0;
}