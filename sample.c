#include <stdio.h>

int main() {
    
    int i,j;
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {10,20,50,40,30};
    int merge[50];
    
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr1[0]);
    
    printf("\n__Array1 value__\n");
    for(i=0;i<size1;i++){
        printf("%d",arr1[i]);
        if( i!= size1-1)printf(", ");
    }
    printf("\n__Array2 value__\n");
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
    printf("\n__Merged Array__\n");
    for(i=0;i<size1+size2;i++){
        printf("%d",merge[i]);
        if( i!= size1+size2-1)printf(", ");
    }
    
    
    return 0;
}