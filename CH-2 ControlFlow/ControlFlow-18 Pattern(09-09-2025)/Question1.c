//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *
//    * * * * * * *
//      * * * * *
//        * * *
//          *


// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);


//     for(int i =1; i<= n; i++){

//         for(int spc = 1; spc <= n-i; spc++){
//             printf("  ");
//         }
//         for(int str = 1; str <= i*2-1 ; str++){
//             printf(" *");
//         }
//         printf("\n");
//     }

//     for(int i =1; i< n; i++){

//         for(int spc = 1; spc <= i; spc++){
//             printf("  ");
//         }
//         for(int str = 1; str <= (n-i)*2-1 ; str++){
//             printf(" *");
//         }
//         printf("\n");
//     }



//     return 0;
// }



// ! Using only two for loop


#include<stdio.h>
int main(){


    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int spc , star,limit;

    for(int r = 1; r <= 2*n-1; r++){

        if(r<=n){
            spc = n-r;
            star = 2*r-1;
            limit = spc+star;
        }else{
            spc = r -n;
            star = (n - (r-n))*2-1;
            limit = spc+star;
        }

        for(int c = 1; c <= limit; c++){

            if(c<= (spc)){
                printf("  ");
            }else{
                printf(" *");
            }


        }printf("\n");


    }



    return 0;
}