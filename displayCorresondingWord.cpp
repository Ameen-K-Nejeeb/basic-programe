/*
input a numer and check wherhe it is possitive or negetive or zero

*/
#include<iostream>
using namespace std;
int main(){
     
    int number;

    cout<<"enter a number to check wether it is positive or negative :";
    cin>>number;

    if(number>0){
        cout<<"the number is positive";
    }else{
        cout<<"the number is negative";
    }

    return 0;
}