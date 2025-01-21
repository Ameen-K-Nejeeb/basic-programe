#include <iostream>
using namespace std;
int main(){

    int num1;

    cout<<"enter a number to check odd or even :";
    cin>>num1;

    if(num1 % 2==0){
        cout<<"the number is even";
    }else{
        cout<<"the number is odd";
    }
    if(num1==0){
        cout<<"the entered valuse is zero";
    }

    return 0;
}