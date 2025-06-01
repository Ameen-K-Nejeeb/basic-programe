#include <stdio.h>

int main() {
    
    int arr[] = {7,1,9,3,5};
    int i , temp ;
    
    printf("Before sorting :");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
        if(i != 4){
            printf(", ");
        }
    }
    for(int j =1;j<=5-1;j++){
        for(i=0;i<5-1;i++){
            if(arr[i]<arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
        }
    }
        
    }
    printf("\n After sorting :");
    
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
        if(i != 4){
            printf(", ");
        }
    }
    return 0;
}