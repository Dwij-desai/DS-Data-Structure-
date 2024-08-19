#include <stdio.h>

int main(){

    int s1,s2,s3,s4,s5;

    printf("Enter the 5 Subjects separated below:\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    int total = s1+s2+s3+s4+s5;
    float persentage = (total/500.0)*100;

    if(s1<=100&& s2<=100&& s3<=100&& s4<=100&& s5<=100){

        printf("\nTotal:\t%d",total);
        printf("\nPersentage:\t%f",persentage);

    }else{
        printf("Enter the corrat value of 5 Subjects");
    }

    return 0;
}