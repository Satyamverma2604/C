/*Sum_Of _N_Natural_Numbers
Write a Cprogram to print sum of N natural numbers without using loops.

Sample input : int n = 10
Sample output : 55

Input: 10        → Output: 55  
Input: 5         → Output: 15  
Input: 0         → Output: 0  
Sample Input
10
Sample Output
55*/

#include<stdio.h>
int main() {

    int n ;
    scanf("%d",&n);

    printf("%d",n*(n+1)/2);
    return 0; 
}