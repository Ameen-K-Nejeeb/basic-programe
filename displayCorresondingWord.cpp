/*
display multiplication table of a number have row's
*/
#include<iostream>
using namespace std;
int main(){
    
    int num,multiplies,i;

    cout<<"enter a number to display multiplication table";
    cin>>num;

    for(i=0;i<=10;i++){

        multiplies = i*num;
        cout<<i<<" X "<<num<<" = "<<multiplies<<"\n";
    }
     
    
    return 0;
}