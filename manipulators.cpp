#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num=50;
    float pi=3.14159;

    cout<<"Using setw():\n";
    cout<<setw(10)<<num<<endl;
    cout<<"Using setprecision():\n";
    cout<<setprecision(3)<<pi<<endl;
    cout<<"\nUsing setfill():\n";
    cout<<setfill('*')<<setw(10)<<num<<endl;
    return 0;
}