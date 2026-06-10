#include<iostream>
using namespace std;

//defining the default arguments
void display(char c='*', int count=3){
    for(int i=1; i<=count; ++i){
        cout<<c;
    }
    cout<<endl;
}

int main(){
    int count=5;
    cout<<"No arguments passed: ";
    display(); //uses default arguments
    cout<<"First argument passed: ";
    display('#'); //uses default count
    cout<<"Both arguments passed: ";
    display('&', count); //uses provided arguments
return 0;
}