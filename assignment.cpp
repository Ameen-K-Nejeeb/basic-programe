/*
2.Write a program to sort an array in descending order
b.Program should accept and array, sort the array values in descending order and display it

*/
#include <stdio.h>
int main(){

    int limit,value[100],i,j,temp;

    printf("limit of array :");
    scanf("%d ",&limit);

    printf("\n");

    printf("enter array element :");
    for(i=0;i<limit;i++){
        scanf("%d ",&value[i]);
    }


    printf("entered array :");
    for(i=0;i<limit;i++){
        printf("%d ",value[i]);
    }

    printf("\n");


    for(i=0;i<limit;i++){
        for(j=i+1; j<limit;j++){
            if(value[i]<value[j]){
                temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }

    printf("descending order of array :");
    for(i=0;i<limit;i++){
        printf("%d ",value[i]);
    }

    return 0;
}