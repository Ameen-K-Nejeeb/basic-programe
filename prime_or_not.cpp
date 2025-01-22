/*
input an integer number and check whether it is prime r not
*/
#include<iostream>
using namespace std;
int main(){

   int num,i;
   bool isprime = true;

    cout<<"provide a positive number";
    cin>>num;

    if(num<=2){
        isprime = false;
    }else{
        for(int i=2;i<=num/2;i++){
            if(num%i == 0){
                isprime = false;
            }
        }
    }
    if(isprime){
        cout<<"number is prime";
    }else{
        cout<<"number is not a prime";
    }

    return 0;
}