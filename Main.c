#include <stdio.h>

int main() {
    
     int i,num,pos;
     int arr[] = {11,22,33,55,11,66,99};
     int n = sizeof(arr)/sizeof(arr[0]);
     
     printf("Array : ");
     for(i=0;i<n;i++){
         printf("%d",arr[i]);if(i!=n-1)printf(", ");
     }
     printf("\n Array size : %d",n);
    printf("\nwhich position to add : ");
    scanf("%d",&pos);
    
    printf("\nEnter a element : ");
    scanf("%d",&num);
    
    if(n == pos){
        n++;
        arr[n-1] = num;
    }else{
        for(i=n;i>=pos;i--){
            arr[i] = arr[i-1];
        }
        n++;
        arr[pos-1] = num;
    }
    printf("\nupdated array : ");
         for(i=0;i<n;i++){
         printf("%d",arr[i]);if(i!=n-1)printf(", ");
     }

    return 0;
}