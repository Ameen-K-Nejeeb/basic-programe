#include<stdio.h>
 
int main(){

    int a[100];
    int limit,i,searchkey;

    printf("enter array limit and enter values to array :");
    scanf("%d",&limit);

    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        printf("%d",a[i],", ");
    }

    printf("\n enter a number to check ,same number in the array :");
    scanf("%d",&searchkey);

    for(i=0;i<limit;i++){
        if(searchkey==a[i]){
            printf("item found %d position",i+1);
            break;
        }
    }

    

    return 0;
}