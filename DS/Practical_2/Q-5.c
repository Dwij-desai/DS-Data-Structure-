#include <stdio.h>

int main(){

    float radius,diameter,circumference,area,pi=3.14159;

    printf("Enter the value of Radius: ");
    scanf("%f",&radius);

    diameter = radius* radius;

    circumference = 2* radius* pi;

    area = pi* radius* radius;

    printf("\nOutput:-\n");
    printf("Diameter: %.4f\n",diameter);
    printf("Circumference: %.4f\n",circumference);
    printf("Area: %.4f\n",area);

    return 0;
}