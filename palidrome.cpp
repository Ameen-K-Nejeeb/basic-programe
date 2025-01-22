/*
checking it's palidrome
*/
#include<iostream>
using namespace std;
int main(){

    int num,n,digit,rev=0;

    cout<<"enter number to check it's palidrome :";
    cin>>num;
    n = num;

    while(num>0){
        digit = num % 10;
        rev = (rev*10) + digit;
        num = num/10;
    }
    cout<<"the reverce of the number is \n"<<rev<<"\n";
    if(n==rev){
        cout<<"entered number is palidrome";
    }else{
        cout<<"entered number is not palidrome";
    }

    return 0;
}