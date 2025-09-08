//          1
//        3 2 1
//      5 4 3 2 1
//    7 6 5 4 3 2 1
//  9 8 7 6 5 4 3 2 1


#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i =1; i<=n; i++){

        for(int spc = 1; spc <=(n-i);spc++ ){
            printf("  ");
        }

        for(int j = i*2-1; j>=1; j--){
            printf("%d ",j);
        } 
        printf("\n");
      

    }

    

    return 0;
}


// ! using only two for loop



// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int start,space;


//     for(int i = 1; i<=n; i++){

//        start=i*2-1;

//         for(int j = 1 ;j<=n+i-1; j++){
//             int limit = n-i;

//             if(j<=limit)
//             printf("  ");
//             else
//             printf(" %d",start--);
        
//         } printf("\n");


//     }



//     return  0;
// }
