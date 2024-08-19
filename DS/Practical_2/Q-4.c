// // Q-1

// #include <stdio.h>

// int main(){

//     int hight,wight;

//    printf("Enter the vlaue of Hight and Wight:- \n");
//    printf("Hight:\t"); scanf("%d",&hight);
//    printf("Wight:\t"); scanf("%d",&wight); 

//     for(int i=0;i<hight;i++)
//     {
//         for (int j = 0; j < wight; j++)
//         {
//             if (i==0 || i==hight-1 || j==0 || j==(wight-1))
//             {
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

//Q-2

#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < 2 * n - 1; i++) {
        int spaces = n - 1 - (i < n ? i : 2 * n - 2 - i);
        int stars = 2 * (i < n ? i : 2 * n - 2 - i) + 1;

        for (int j = 0; j < spaces; j++){
            printf(" ");
        }
        for (int j = 0; j < stars; j++){
            printf(j == 0 || j == stars - 1 ? "*" : " ");
        }
        printf("\n");
    }

    return 0;
}



// //Q-3

// #include <stdio.h>

// int main(){

//     int size=0;

//     printf("Enter the size of stucher:- ");
//     scanf("%d",&size);

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");        
//     }
//     return 0;
    
// }