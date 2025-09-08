// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *


// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter a odd number: ");
//     scanf("%d",&n);

//     for(int i = 1; i<=n; i++){

//         for(int spc = 1; spc <= i - 1; spc++)
//         printf("  ");

//         for(int j = (n-i)*2+1; j>=1; j--){
//             printf(" *");
//         }
//         printf("\n");
//     }



//     return 0;
// }


//! Using only 2 for loops


#include<stdio.h>
int main(){

    int n;
    printf("Enter a odd number: ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){

        int space = i-1;

        for(int j = 1; j<= n+(n-i); j++){
            
            if(j<=space)
            printf("  ");
            else
            printf(" *");
        }
        printf("\n");
    }



    return 0;
}