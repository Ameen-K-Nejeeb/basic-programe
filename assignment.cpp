/*
1.Write a program to interchange the values of two arrays
a.Program should accept an array from the user, swap the values of two arrays and display it on the console

*/
#include <stdio.h>
int main(){

    int array1[100],array2[100],limit,i,temp;

    printf("enter a limit of array size :");
    scanf("%d",&limit);


    printf("enter value to array1 :");
    for(i=0;i<limit;i++){
        scanf("%d ",&array1[i]);
    }
   
    printf("enter value to array2 :");
   for(i=0;i<limit;i++){
        scanf("%d ",&array2[i]);
    }


    printf("       before swapping the array \n");

    printf("array1 = :");
    for(i=0;i<limit;i++){
        printf("%d ",array1[i]);
    }

    printf("\n");

    printf("array2 = :");
    for(i=0;i<limit;i++){
        printf("%d ",array2[i]);
    }

    printf("\n");


    printf("       after swapping the array\n");

    for(i=0;i<limit;i++){
        temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    printf("array1 = ");

    for(i=0;i<limit;i++){
        printf("%d ",array1[i]);
    }

    printf("\n");

    printf("array2 = ");


    for(i=0;i<limit;i++){
        printf("%d ",array2[i]);
    }



    return 0;
}