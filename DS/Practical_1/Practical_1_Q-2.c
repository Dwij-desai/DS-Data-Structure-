#include <stdio.h>

int main(){

    float km=0;

    printf("Enter your unit in Km:\t");
    scanf("%f",&km);

    float feet = (km* 3280.84);
    float meter = (km* 1000);
    float inche = (km* 39370.08);
    float cm = (km* 100000);

    printf("\nFeet: %f\n",feet);
    printf("meter: %f\n",meter);
    printf("inche: %f\n",inche);
    printf("cm: %f\n",cm);

    return 0;
}