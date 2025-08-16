/*ServiceCenter

[Title: Vehicle Service Center Management System Using nested else-if ladder]
-----------------------------------------------------------------------------
Write a C program for a service center by following the given rules and guidelines.

This service center only accepts 2-wheelers, 3-wheelers, and 4-wheelers. If any other vehicle comes to you, you must display a message: "This service center does not accept vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers."

If the vehicle is a 2-wheeler, 3-wheeler, or 4-wheeler, you should ask the user what the age of the vehicle is.

If the age of the vehicle is above 8 months, only then will you accept the service; otherwise, you must show a message: "Your vehicle service will be done after a while."

If the vehicle's age is greater than 8 months, display options to the user on the console.

Options :-
----------
-> Enter 1 for a tire problem
-> Enter 2 for a fuel problem
-> Enter 3 for an engine issue
-> Enter 4 for general services

If the user enters 1 as input for a tire problem, you should display the message: "How many tires are you facing issues with?" Based on the number of tires, generate the bill.

For example, if the tire cost is Rs. 400, and the user provides 3 tires, the bill should be generated as Rs. 1200 in the format below.

Bill Format :-
---------------
-> Name of the owner

-> Name of the bike

-> Issue

-> Bill
--------
For fuel problems, the cost is Rs. 1500.

For engine issues, the cost is Rs. 5000.

For general servicing, the cost is Rs. 1000.

Please generate the bill in the above format.

Enter owner's name: John Doe
Enter vehicle name: Yamaha FZ
Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): 2
Enter vehicle age in months: 12

Select the issue:
-> Enter 1 for tire problem
-> Enter 2 for fuel problem
-> Enter 3 for engine issue
-> Enter 4 for general services
Enter your choice: 1
How many tires are you facing issues with? 2

----- Bill Format -----
-> Name of the owner: John Doe
-> Name of the bike: Yamaha FZ
-> Issue: Tire Problem
-> Bill: Rs. 800.00
Sample Input
Enter owner's name: John Doe
Enter vehicle name: Yamaha FZ
Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): 2
Enter vehicle age in months: 12

Select the issue:
-> Enter 1 for tire problem
-> Enter 2 for fuel problem
-> Enter 3 for engine issue
-> Enter 4 for general services
Enter your choice: 1
How many tires are you facing issues with? 2
Sample Output
----- Bill Format -----
-> Name of the owner: John Doe
-> Name of the bike: Yamaha FZ
-> Issue: Tire Problem
-> Bill: Rs. 800.00
*/




#include<stdio.h>
#include<stdlib.h>
int main(){

    int whellers,age,option,noOfTires;
    char name[20],vehicleName[20];
    printf("Enter how many whellers vehicle you have: ");
    scanf("%d",&whellers);
    if(whellers>=2 && whellers <=4){
      
    system("cls");
         printf("Enter vehicle age in months: ");
        scanf("%d",&age);
        if(age>8){
            system("cls");
            printf("Enter owner name\n");
            scanf("%s",&name);
            system("cls");
            printf("Enter vehicle name\n");
            scanf("%s",&vehicleName);
            choose:
            system("cls");
            printf("Choose an option.\n");
            printf("Enter 1 for a tire problem\n");
            printf("Enter 2 for a fuel problem\n");
            printf("Enter 3 for an engine issue\n");
            printf("Enter 4 for general services\n");
            scanf("%d",&option);
            if(option < 1 && option > 4 ){
                system("cls");
                printf("Enter a valid option between 1 to 4.");
                goto choose;
            }else if(option == 1){
                tire:
                system("cls");
                printf("How many tires are you facing issues with?\n");
                scanf("%d",&noOfTires);
                if(noOfTires > whellers){
                    system("cls");
                    printf("Plese inter a valid no of Tires.\n");
                    goto tire;
                }else{
                system("cls");
            printf("Bill :-");
            printf("--------------\n");
            printf("Name of the owner - %s.\n",name);
            printf("Name of the vehicle - %s.\n",vehicleName);
            printf("Issue - Tire problem.\n");
            printf("The total bill is : %d\n",400*noOfTires);
                }
            
            }
            else if(option == 2){
                system("cls");
            printf("Bill :-");
            printf("--------------\n");
            printf("Name of the owner - %s.\n",name);
            printf("Name of the vehicle - %s.\n",vehicleName);
            printf("Issue - Fuel problem.");
            printf("The total bill is : %d ",1500);
           
            
            }
            else if(option == 3){
                system("cls");
            printf("Bill :-");
            printf("--------------\n");
            printf("Name of the owner - %s.\n",name);
            printf("Name of the vehicle - %s.\n",vehicleName);
            printf("Issue - engine problem.");
            printf("The total bill is : %d ",5000);
           
            
            }
            else {
                system("cls");
            printf("Bill :-");
            printf("--------------\n");
            printf("Name of the owner - %s.\n",name);
            printf("Name of the vehicle - %s.\n",vehicleName);
            printf("Issue - general service.");
            printf("The total bill is : %d ",1000);
           
            
            }
        }else{
            system("cls");
            printf("Your vehicle service will be done after %d months",8-age);
        }
    }else{
        system("cls");
        printf("This service center does not accept vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers.\n");
    }



    return 0;
}