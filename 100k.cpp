
/*
    Write a program to check whether a student has passed or failed
     in a subject after he or she enters their mark (pass mark for a subject is 50 out of 100).

*/

#include<stdio.h>

int main(){

   float mark;

    printf("enter your mark to check if you passed or faild :");
    scanf("%f",&mark);

    if(mark>=50){
        printf("the student has passed %.2f\n",mark);
    }else{
        printf("the student faild % .2f\n",mark);
    }



    return 0;
}