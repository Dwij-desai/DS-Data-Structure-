#include <stdio.h>

int main(){

    int Digi5=0,digi[5];

    printf("Enter the five-digit number:\t");
    scanf("%d",&Digi5);

    if (Digi5 >= 10000 && Digi5<=99999)
    {
        for (int i = 0; i < 5; i++) {
            digi[4- i] = Digi5 % 10;
            Digi5 /= 10;
            digi[4- i] = --digi[4- i];
        }
        printf("Digits: ");
        for (int i = 0; i < 5; i++) {
            printf("%d", digi[i]);
        }
        printf("\n");
    }else{
        printf("\n\nERROR:Entered number is not four-digit long");
    }
    
    return 0;
}