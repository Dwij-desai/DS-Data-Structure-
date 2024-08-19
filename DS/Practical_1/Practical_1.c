#include <stdio.h>

int main(){

    float inSalary;

    printf("Enter the your Salary Here:\t");
    scanf("%f",&inSalary);

    float Salary_20 = (inSalary*0.2);

    float Salary_40 = (inSalary*0.4);

    float TSalary = ((Salary_40+ Salary_20)+ inSalary);

    printf("Output as total of the orignal Salary is:\t %f",TSalary);

    return 0;
}