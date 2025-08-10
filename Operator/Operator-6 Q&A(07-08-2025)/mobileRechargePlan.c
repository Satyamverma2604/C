/*Mobile Recharge Plan
A telecom company offers three different monthly data plans based on user data consumption. Your task is to write a program that suggests the correct plan based on the user's monthly data usage (in GB).

The plan selection rules are:

If usage is less than 2 GB → Plan A: ₹199/month

If usage is 2 GB to less than 10 GB → Plan B: ₹399/month

If usage is 10 GB or more → Plan C: ₹599/month

You must use the ternary operator to determine and display the recommended plan and its cost.

 Input Format :
A single integer usage — the user's monthly data usage in GB.

Output Format :
Print the recommended plan in the format:
"Plan A - ₹199"
"Plan B - ₹399"
"Plan C - ₹599"
Sample Input
1
Sample Output
Plan A - RS. 199
Constraints:
0 ≤ usage ≤ 100
Explanation
Input: 1 1 GB < 2 GB → Plan A is recommended Input: 5 5 GB falls between 2 and 10 → Plan B is recommended Input: 15 15 GB is ≥ 10 GB → Plan C is recommended
*/

#include<stdio.h>
int main(){

    int dataConsumption;
    scanf("%d",&dataConsumption);

    (dataConsumption < 2) ? printf("Plan A - RS. 199") : (dataConsumption >= 2) && (dataConsumption < 10 ) ? printf("Plan B - RS. 399") : printf("Plan C - RS. 599"); 

    return 0;
}