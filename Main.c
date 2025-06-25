#include<stdio.h>
#include<string.h>
int main(){

    float price,quantity,total;
    int p,found;
    char choice[20];
    char* arr[] = {"Pizza","Burger","Shawai","Shavarma","Porotta","dhosha"};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("\n-->Menu<--\n");
    printf("item count : %d\n\n",n);
    for(int i=0;i<n;i++){
        printf("%d. %s \n",i+1,arr[i]);
    }

    printf("which dish did you want : ");
    scanf("%s",choice);
    for(int i=0;i<n;i++){
        if(strcmp(arr[i] , choice) == 0){
        printf("What is the price for each : \n");
        scanf("%f",&price);
        printf("How many would you like : \n");
        scanf("%d",&p);
        printf("You have bought %d %s's\n",p,choice);

        total = p*price;
        printf("Total is : %f\n",total);

        found =1;
        break;
    }
    }

    if(!found){
        printf("\nDish not found");
    }
    
}