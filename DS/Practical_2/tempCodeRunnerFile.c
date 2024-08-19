//Q-3

#include <stdio.h>

int main(){

    int size=0;

    printf("Enter the size of stucher:- ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");        
    }
 retune 0;
    
}