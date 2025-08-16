/*Q-4
---------
Write a C program that reads:
The number of students in a classroom.
The number of chairs available.

If the number of students is greater than the number of chairs, print how many extra chairs need to be arranged.
Otherwise, print "All students are seated perfectly".

Example 1:
Input:  
Students: 30  
Chairs: 25  

Output:  
Need 5 more chairs

Example 2:
Input:  
Students: 20  
Chairs: 20  

Output:  
All students are seated perfectly

Example 3:
Input:  
Students: 15  
Chairs: 18  

Output:  
All students are seated perfectly
*/


#include<stdio.h>
int main(){

    int chair,stu;
    printf("Enter No of students: ");
    scanf("%d",&stu);
    printf("Enter No of chairs: ");
    scanf("%d",&chair);

    if(stu > chair){

        printf("Need %d more chair.",stu - chair);

    }else{
        printf("All students are seated perfectly.");
    }

    return 0;
}