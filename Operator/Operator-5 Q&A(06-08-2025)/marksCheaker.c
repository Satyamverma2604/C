/*Check_Pass_Fail
Create a program to determine whether a student has passed or failed based on their marks and a grace rule.

✅ Rule Definition:
A student is considered Pass if either of the following conditions is satisfied:

Marks ≥ 35

Marks ≥ 30 and grace is available (grace == 1)

Otherwise, the student is considered Fail.

📥 Inputs:
marks: (Integer) The marks obtained by the student (0–100 range).

grace: (Integer) The grace indicator:

0 → No grace available

1 → Grace can be applied

📤 Output:
"Pass" or "Fail" depending on the evaluation.
Sample Input
36 0
Sample Output
pass*/

#include<stdio.h>
int main(){

    int marks, grace;

    scanf("%d %d", &marks, &grace);
    (marks >= 35) ? printf("Pass") : (marks >= 30) && ( grace == 1) ? printf("Pass") : printf("Fail");

    return 0;
}
