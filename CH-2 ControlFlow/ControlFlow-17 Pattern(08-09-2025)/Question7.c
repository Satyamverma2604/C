//  * * * * * * *
//  *     *     *
//  *     *     *
//  * * * * * * *
//  *     *     *
//  *     *     *
//  * * * * * * *



#include<stdio.h>
int main(){

    int n;
    printf("Enter a odd number: ");
    scanf("%d",&n);

    for(int i = 1; i<=n/2+1; i++){

    

        for(int j = 1; j<= n ;j++){
            if(j==1 || j == n/2+1|| i == 1 || i == n/2+1|| j==n)
            printf(" *");
            else 
            printf("  ");
        }
        printf("\n");
    }
    for(int i = n/2+2; i<=n ;i++){


        for(int j = 1; j<= n ;j++){
            if( j==1||j==n||j == n/2+1|| i==n)
            printf(" *");
            else 
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}






// ! using two for loops

// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter a odd number: ");
//     scanf("%d",&n);

//     for(int i = 1; i<=n; i++){

    

//         for(int j = 1; j<= n ;j++){
//             if(j==1 || j == n/2+1|| i == n/2+1 || i==1 || j==n || i==n)
//             printf(" *");
//             else 
//             printf("  ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


