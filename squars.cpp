/*
programe to find the sum of squares of the first 'n' naural number ,witout using formula
*/

#include<iostream>
using namespace std;
int main(){
    int i,num,sum=0,q;
    cout<<"enter a value";
    cin>>num;
    for(i=0;i<=num;i++){
        q=i*i;
        sum = sum + q;
    }
    cout<<"the sum of the square"<<sum;


    return 0;
}