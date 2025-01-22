/*
input two number's swap then by defently a function with pointers and arguments
*/
#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int a,b;
    cout<<"enter the valuse of a and b :";
    cin>>a>>b;
    cout<<"\n before swap \n";
    cout<<"a = "<<a<<" "<<"b = "<<b;

    cout<<"\n after swap \n";
    swap(&a,&b);
    
    cout<<"a = "<<a<<" "<<"b = "<<b;

    return 0;
}