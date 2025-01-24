
/*
   Write a program to show the grade obtained by a student after he/she enters their total mark percentage

*/

#include<stdio.h>

int main(){

    char digit;

    printf("enter a digit to display corresponding day :");
    scanf("%c",&digit);

    switch(digit){
        case '1':printf("monday %c");break;
        case '2':printf("tuesday %c");break;
        case '3':printf("wenesday %c");break;
        case '4':printf("thusday %c");break;
        case '5':printf("friday %c");break;
        case '6':printf("saturday %c");break;
        case '7':printf("sunday %c");break;
        default:printf("Not a digit %c");break;

    }

    return 0;
}