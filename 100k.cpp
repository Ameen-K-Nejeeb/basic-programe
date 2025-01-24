
/*
   Write a program to show the grade obtained by a student after he/she enters their total mark percentage

*/

#include<stdio.h>

int main(){

    int number,i;

    printf("enter a number to display even numbers only :");
    scanf("%d",&number);

    if(number<2){
        printf("pleace enter a value 2 to any number");
    }else{
        for(i=2;i<=number;i++){
            if(i % 2 == 0){
                printf("%d  ",i);
            }
        }
    }

    return 0;
}