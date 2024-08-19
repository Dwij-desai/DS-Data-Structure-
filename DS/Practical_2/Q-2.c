#include <stdio.h>

int main(){

    float Tprice,Tprofit,Tprice_item,price_item;

    printf("Enter the total price of the items: ");
    scanf("%f",&Tprice);

    printf("\nEnter the total profit earned: ");
    scanf("%f",&Tprofit);

    Tprice_item = Tprice - Tprofit;
    price_item = Tprice_item / 15;

    printf("\nThe cost price of one item is: %.2f\n", price_item);
    printf("And total price of 15 items is: %.2f",Tprice_item);

    return 0;
}