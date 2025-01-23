#include<iostream>
using namespace std;
int main(){
    char d;

    cout<<"enter a digit to display day :";
    cin>>d;

    switch(d){
        case'0':cout<<"sunday";break;
        case'1':cout<<"monday";break;
        case'2':cout<<"tuesday";break;
        case'3':cout<<"wenesday";break;
        case'4':cout<<"thursday";break;
        case'5':cout<<"friday";break;
        case'6':cout<<"saturday";break;
        case'7':cout<<"sunday";break;
        case'8':cout<<"monday";break;
        default:cout<<" not a number";break;
    }


    return 0;
}