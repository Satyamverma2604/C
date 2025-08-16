/*Speeding Fine System
A traffic monitoring system is used to calculate fines based on a vehicle's speed.

The speed limit is set to 60 km/h.

If a vehicle exceeds the speed limit, the following fines are applied:

Speed > 60 and ≤ 80 → ₹100 fine

Speed > 80 → ₹500 fine

Speed ≤ 60 → No fine

Given the speed of a vehicle, write a program to determine the appropriate fine.

Input Format :
A single integer speed — the speed of the vehicle in km/h.

Output Format :

"₹100" if speed is more than 60 and up to 80.
"₹500" if speed is more than 80.
"No fine" if speed is 60 or less.
Sample Input
65
Sample Output
100
Constraints:
0 ≤ speed ≤ 300
Explanation
Explanation: Input: 65 Since 65 > 60 and ≤ 80 → Fine is ₹100 Input: 85 Since 85 > 80 → Fine is ₹500 Input: 50 Since 50 ≤ 60 → No fine.
*/

#include<stdio.h>
int main(){

    int speed;
    scanf("%d",&speed);

    (speed > 80) ? printf("%d",500) : (speed <= 80) && (speed > 60) ? printf("%d",100) : printf("No Fine");

    return 0;
}