#include<stdio.h>
#include<stdlib.h>
int main(){

    int option;
    system("cls");

    printf("Menu:-\n");
    printf("--------\n");
    printf("1. Pizza - $10\n");
    printf("2. Burger - $7\n");
    printf("3. Pasata - $8\n");
    printf("4. Salad - $5\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&option);

    switch(option){

        case 1: printf("Enter the quantity: ");
        scanf("%d",&option);
        printf("You ordered %d Pizza. Price: $%d",option,option*10);break;

        case 2: printf("Enter the quantity: ");
        scanf("%d",&option);
        printf("You ordered %d burger. Price: $%d",option,option*7);break;

        case 3: printf("Enter the quantity: ");
        scanf("%d",&option);
        printf("You ordered %d Pasta. Price: $%d",option,option*8);break;

        case 4: printf("Enter the quantity: ");
        scanf("%d",&option);
        printf("You ordered %d Salad. Price: $%d",option,option*5);break;

        case 5: printf("Exiting the program. Thank you!");break;
        
        default : printf("Invalid input.");
    }

    return 0;
}