//         1 
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5



// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for(int i =1; i<=n; i++){

//         for(int spc = 1; spc <=(n-i);spc++ ){
//             printf("  ");
//         }

//         for(int j = i; j>=1; j--){
//             printf("%d ",j);
//         } 
//         for(int k =2; k<= i; k++){
//             printf("%d ",k);
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


    for(int i = 1; i<=n ; i++){

        int space = (n-i),first = i,second = 2;
        

        for(int j = 1; j <=n+i-1; j++){

            if(j<=space)
            printf("  ");
            else if(j<=n)
            printf(" %d",first--);
            else
            printf(" %d",second++);

        }
        printf("\n");

        
    }




    return 0;
}