//          *
//        *   *
//      *       *
//    *           *
//  *               *
//    *           *
//      *       *
//        *   *
//          *

#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);


    for(int i =1; i<= n; i++){

        for(int spc = 1; spc <= n-i; spc++){
            printf("  ");
        }
        for(int str = 1; str <= i*2-1 ; str++){
            if(str == 1 || str == i*2-1)
            printf(" *");
            else 
            printf("  ");
        }
        printf("\n");
    }

    for(int i =1; i< n; i++){

        for(int spc = 1; spc <= i; spc++){
            printf("  ");
        }
        for(int str = 1; str <= (n-i)*2-1 ; str++){
            if(str == 1 || str == (n-i)*2-1)
            printf(" *");
            else 
            printf("  ");
        }
        printf("\n");
    }



    return 0;
}


// ! Using only two for loop

