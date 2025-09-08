// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for(int i =1; i<=n; i++){

//         for(int j = 1; j<=i; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
      

//     }

//     for(int i =1; i<=n; i++){

//           for(int k =1; k<= n-i; k++){
//             printf("%d ",k);
//         }
//         printf("\n");

//     }

//     return 0;
// }



//! ONLY TWO FOR LOOPS



#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int limit;


    for(int i = 1; i<=2*n-1; i++){

        if(i<=n)
        limit=(i);
        else
        limit = n-(i-n);

        for(int j =1; j<= limit; j++){
            printf("%d ",j);
        }
        printf("\n");


    }



    return  0;
}