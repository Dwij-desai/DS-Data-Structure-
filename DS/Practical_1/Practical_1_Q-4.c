#include <stdio.h>

int main(){

    int Digi4=0,digi[100];

    printf("Enter the four-digit number:\t");
    scanf("%d",&Digi4);

    if (Digi4<=9999 && Digi4>=1000)
    {
        for(int i=0; i<4; i++){
            digi[i] = Digi4%10;
            Digi4=Digi4/10;
        }
        
        printf("Total of 4 digit:\t%d",(digi[0]+digi[1]+digi[2]+digi[3]));
    }else{
        printf("\n\nERROR:Entered number is not four-digit long");
    }
    
    return 0;
}