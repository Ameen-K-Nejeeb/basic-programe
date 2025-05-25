
#include <stdio.h>


//Write a program to check if a given number or string is a palindrome.

int main() {

    int number,reverced,orginal,reminder;

    printf("Enter a number to check it is palidrome :");
    scanf("%d",&number);

    orginal = number;

    while(number != 0){
        reminder = number%10;
        reverced = reverced *10 + reminder;
        number = number/10;

    }
    if(orginal == reverced){
        printf("Entered number is palidrome :%d \n",orginal);
    }else{
        printf("Entered number is not palidrome :%d \n",orginal);
    }

    return 0;
}
