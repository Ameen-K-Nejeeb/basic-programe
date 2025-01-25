#include<stdio.h>
 
int main(){

    int num1,num2,value,addition,substraction,multiplication,divition;

    printf("enter a 2 number to calculator \n");

    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("1 for additoin \n");
    printf("2 for substraction\n");
    printf("3 for multilpication\n");
    printf("4 for divition\n");

    scanf("%d",&value);

    if(value==1){
        addition = num1+num2;
        printf("sum of two number %d:",addition);
    }else if(value==2){
        substraction = num1-num2;
        printf("substraction of 2 number :%d",substraction);
    }else if(value==3){
        multiplication = num1*num2;
        printf("multiplication of two number :%d",multiplication);
    }else if(value==4){
        divition = num1/num2;
        printf("divitoin of 2 number : %d",divition);
    }else{
        printf("you fool !");
    }


    return 0;
}