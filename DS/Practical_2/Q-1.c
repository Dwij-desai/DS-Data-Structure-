#include <stdio.h>

int main(){

    int a,b,sum,product,difference,quotient,remainder;
    int choice;

    printf("Enter 2 Value:\t");
    scanf("%d %d",&a,&b);

    printf("\nChoice your preference:\n");
    printf("1) Sum\n");
    printf("2) Product\n");
    printf("3) Difference\n");
    printf("4) Quotient\n");
    printf("5) Remainder\n");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:
            sum = a+ b; 
            printf("Sum = %d",sum);
        break;

        case 2:
            product = a* b;
            printf("Product = %d",product); 
        break;

        case 3:
            difference = a - b;
            printf("Difference = %d",difference); 
        break;

        case 4:
            quotient = a / b;
            printf("Quotient = %d",quotient); 
        break;

        case 5:
            remainder = a % b;
            printf("Remainder = %d",remainder); 
        break;
        
        default:
            printf("\n\nERROR:Wrong entered number");
        break;
    }
    
    return 0;
}