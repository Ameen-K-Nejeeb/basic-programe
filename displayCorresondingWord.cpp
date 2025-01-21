/*
find the length of a string without using strlen function
*/
#include<iostream>
using namespace std;
int main(){
     
     int i,count=0;

    char name[25];
    cout<<"length of string \n";
    cin>>name;
    
    for(i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<"number of character = "<<count;

    return 0;
}