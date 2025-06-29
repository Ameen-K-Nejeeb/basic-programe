#include<stdio.h>
int main(){

    float weight,conversion;
    int oneortwo;

    printf("\tWeight Conversion Calculator\t\n");
    printf("1.Kilograms to pound\n2.pounds to kilograms");
    printf("\n which one you choice(1/2) : ");
    scanf("%d",&oneortwo);
    if(oneortwo == 1){
        printf("Enter your weight in kilograms : ");
        scanf("%f",&weight);
        conversion = weight * 2.20462;
        printf("weight in pounds : %f",conversion);
    }else if(oneortwo == 2){
        printf("Enter your weight in pounds : ");
        scanf("%f",&weight);
        conversion = weight *0.453592;
        printf("weight in kilograms : %f",conversion);
    }else{
        printf("Y0u should enter (1/2)");
    }

    return 0;
}