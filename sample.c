#include <stdio.h>

// Write a program to add a new element at the end of the array.
int main() {
    int ar[100];
    int i,limit,new_value;
    
    printf("Enter a limit :\n");
    scanf("%d",&limit);
    printf("Enter Array values : ");
    
    for(i=0;i<limit;i++){
        scanf("%d",&ar[i]);
    }
    printf("______Before incerting values______\n");
    
    for(i=0;i<limit;i++){
        printf("%d",ar[i]);
        if(i != limit-1){
            printf(", ");
        }
    }
    printf("\nEnter a value to extend array \n");
    scanf("%d",&new_value);
    
    printf("\n______After incerting values______\n");
    
    ar[limit] = new_value;
    limit++;
        
    for(i=0;i<limit;i++){
        
        printf("%d",ar[i]);
        if(i != limit-1){
            printf(", ");
        }
    }
    return 0;
}