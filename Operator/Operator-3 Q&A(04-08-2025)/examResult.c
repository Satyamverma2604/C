/*Que 1 : Write a 'C' program to take the marks of a student in 5 subjects as input and determine how many subjects have marks greater than or equal to 35 and how many have marks less than 35. 
------- The program should not use any control statements (if, else, switch, etc.) or the ternary operator. 

Sample input  : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20

Sample Output : Pass in 3 subject and fail in 2 subject.  
*/

#include <stdio.h>

int main() {
    int sub1,sub2,sub3,sub4,sub5, pass=0,fail;
    printf("Enter the marks for sub1\n");
    scanf("%d",&sub1);
    printf("Enter the marks for sub2\n");
    scanf("%d",&sub2);
    printf("Enter the marks for sub3\n");
    scanf("%d",&sub3);
    printf("Enter the marks for sub4\n");
    scanf("%d",&sub4);
    printf("Enter the marks for sub5\n");
    scanf("%d",&sub5);
    
    pass+= (sub1>=35);//sub1>==35&&pass++(second method)
    pass+= (sub2>=35);
    pass+= (sub3>=35);
    pass+= (sub4>=35);
    pass+= (sub5>=35);
    
    printf("You have passed in %d subjects and failed in %d subjects",pass,(5-pass));

    return 0;
}
