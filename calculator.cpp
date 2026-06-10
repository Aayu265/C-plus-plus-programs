#include<iostream>
using namespace std;
int main(){
    int a,b,sum,difference,product,quotient;
    cout<<"Enter any two numbers:";
    cin>>a>>b;
    sum=a+b;
    difference=a-b;
    product=a*b;
    if(b>a){
        quotient=b/a;
    }
    else{
        quotient=a/b;
    }

    cout<<"The sum of"<<a<<"and"<<b<<"is:"<<sum<<endl;
    cout<<"The difference of"<<a<<"and"<<b<<"is:"<<difference<<endl;
    cout<<"The product of"<<a<<"and"<<b<<"is:"<<product<<endl;
    cout<<"The quotient of"<<a<<"and"<<b<<"is:"<<quotient<<endl;
    return 0;
}