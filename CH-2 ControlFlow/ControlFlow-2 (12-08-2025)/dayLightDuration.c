/*Q-2
-------
Daylight Duration
You’re given sunrise and sunset times in hours (24-hour format).
Check if the day is:

Short Day → Less than 12 hours daylight

Long Day → 12 hours or more daylight

Example:
Input: Sunrise=6, Sunset=18 → Long Day  
Input: Sunrise=7, Sunset=17 → Short Day

*/


#include<stdio.h>
int main(){

    int sunrise,sunset,diff;
    printf("Enter sunrise & sunset\n");
    scanf("%d %d",&sunrise,&sunset);

    diff = sunrise - sunset;
    if(diff<0){
        diff = - diff;
    }
    if(diff>=12){
        printf("Long Day");
    }else{
        printf("Short Day");
    }



    return 0;
}