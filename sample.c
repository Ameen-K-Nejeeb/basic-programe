#include <stdio.h>
//How to merge two sorted arrays into one sorted array in C?



int main() {
    
    int i,j,temp;
    int arr1[] = {1,8,3,2,5,7};
    int arr2[] = {10,60,50,72,30};
    int merge[50];
    
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    
    for(i=0;i<size1-1;i++){
        for(j=0;j<=size1-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    
    printf("\n__Sorted Array1 value__\n");
    for(i=0;i<size1;i++){
        printf("%d",arr1[i]);
        if( i!= size1-1)printf(", ");
    }
    for(i=0;i<size2-1;i++){
        for(j=0;j<size2-i-1;j++){
            if(arr2[j]>arr2[j+1]){
                temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    printf("\n__Sorted Array2 value__\n");
    for(i=0;i<size2;i++){
        printf("%d",arr2[i]);
        if( i!= size2-1)printf(", ");
    }
    
    for(i=0;i<size1;i++){
        merge[i] = arr1[i];
    }
    
    
    for(j=0;j<size2;j++){
        merge[i+j] = arr2[j];
    }
    printf("\n");
    for(i=0;i<size1+size2-1;i++){
        for(j=0;j<size1+size2-i-1;j++){
            if(merge[j]>merge[j+1]){
                temp = merge[j];
                merge[j] = merge[j+1];
                merge[j+1] = temp;
            }
        }
    }
    printf("\n__Merged Array__\n");
    for(i=0;i<size1+size2;i++){
        printf("%d",merge[i]);
        if( i!= size1+size2-1)printf(", ");
    }
    
    
    return 0;
}