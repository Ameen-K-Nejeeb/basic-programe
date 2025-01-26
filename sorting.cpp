#include<stdio.h>
 
int main(){

    int a[100];
    int limit,i,searchkey,j,temp;

    printf("enter array limit and enter values to array :");
    scanf("%d",&limit);

    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");

    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf("sorted array \n");
    for(i=0;i<limit;i++){
        printf("%d ,",a[i]);
    }

    return 0;
}