/*

*/
#include <stdio.h>
int main(){

    int a[100],i,j,limit,temp,value;

    printf("enter array limit :");
    scanf("%d",&limit);

    printf("enter array value :");

    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("\t before sorting\n");

    for(i=0;i<limit;i++){
        printf("%d ,",a[i]);
    }


    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] =temp ; 
            }
        }
    }

    printf("\n \tafter sorting \n");

    for(i=0;i<limit;i++){
        printf("%d ,",a[i]);
    }



    return 0;
}