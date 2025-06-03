#include <stdio.h>

// Write a program to get an array from users, remove even numbers from the array and find 6. the average of the existing values in the array.  


int main() {
    int limit,i,j=0;
    float sum = 0;
    int arr[100], oddno[50];
    
    printf("Enter Array limit :");
    scanf("%d",&limit);
    
    printf("\nEnter array values :");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Entered Array values are : ");
    for(i=0;i<limit;i++){
        printf("%d",arr[i]);
        if(i!=limit-1)printf(", ");
    }
    int count=0;
    for(i=0;i<limit;i++){
        if(arr[i] % 2 != 0){
            oddno[j++] = arr[i];
            sum = sum + arr[i];
            count++;
        }
    }

    printf("\n\n Odd no are :");
    for(i=0;i<count;i++){
        printf("%d",oddno[i]);
        if(i!=count-1)printf(", ");
    }
    printf("\n Average of odd numbers :%f ",sum);
    
    
    

    return 0;
}