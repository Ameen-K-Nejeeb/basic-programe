
/*
   Write a program to show the grade obtained by a student after he/she enters their total mark percentage

*/

#include<stdio.h>

int main(){

    int number,i,j;

    scanf("%d",&number);

    for(i=1;i<=number;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n","\t");
    }



    return 0;
}