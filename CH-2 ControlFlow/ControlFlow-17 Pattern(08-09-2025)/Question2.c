

//          1
//        2 1
//      3 2 1
//    4 3 2 1
//  5 4 3 2 1
//    4 3 2 1
//      3 2 1
//        2 1
//          1

// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for(int i =1; i<=n; i++){

//         for(int spc = 1; spc <=(n-i)*2;spc++ ){
//             printf(" ");
//         }

//         for(int j = i; j>=1; j--){
//             printf("%d ",j);
//         }
//         printf("\n");
      

//     }

//     for(int i =1; i<=n-1; i++){

//         for(int spc = 1; spc <=i*2;spc++ ){
//             printf(" ");
//         }

//           for(int k =(n-i); k>= 1; k--){
//             printf("%d ",k);
//         }
//         printf("\n");

//     }

//     return 0;
// }


//! using only two for loops


#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int start,space;


    for(int i = 1; i<=2*n-1; i++){

        if(i<=n)
        start=(i);
        else
        start = 2*n-i;

        for(int j = 1 ;j<=n; j++){
            int limit = (i<=n) ? n-i : (i-n);

            if(j<=limit)
            printf("  ");
            else
            printf(" %d",start--);
        
        }
        printf("\n");


    }



    return  0;
}



