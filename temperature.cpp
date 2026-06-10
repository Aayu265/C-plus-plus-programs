#include<iostream>
using namespace std;
int main(){
    float celsius, fahrenheit;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>fahrenheit;
    celsius=(fahrenheit-32)*5/9;
    cout<<"The temperature in fahrenheit:"<<fahrenheit<<"Temperature in Celsius:"<<celsius<<endl;
    return 0;
}