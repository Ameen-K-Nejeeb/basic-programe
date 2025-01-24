
/*
   Write a program to show the grade obtained by a student after he/she enters their total mark percentage

*/

#include<stdio.h>

int main(){

    float mark,Total_mark;

    printf("enter your mark to display your grade :");
    scanf("%f",&mark);

    if(mark>=90){
        printf("A grade %.2f\n");
    }else if(mark>=80){
        printf("B grade %.2f\n");
    }else if(mark>=70){
        printf("C grade %.2f\n");
    }else if(mark>=60){
        printf("D grade %.2f\n");
    }else if(mark>=50){
        printf("E grade %.2f\n");
    }else{
        printf("Faield %.2f");
    }

    Total_mark = mark;

    printf("Won Mark is :%.2f",Total_mark);


    return 0;
}