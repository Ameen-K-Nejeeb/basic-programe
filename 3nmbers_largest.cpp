#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3;

    cout<<"enter 3 number to check which is largest :";
    cin>>num1>>num2>>num3;

    if(num1>num2){
        cout<<"the largest number is :"<<num1;
    }else if(num2>num3){
        cout<<"the largest number is :"<<num2;
    }else{
        cout<<"the largest number is :"<<num3;
    }


    return 0;
}