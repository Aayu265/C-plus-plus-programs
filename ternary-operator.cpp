#include <iostream>
using namespace std;

int main()

{
    int num1 = 11; 
    int num2 = 22;
    int result = 0; 
    result = num1 & num2; 
    cout<<"num1 & num2: "<<result<<endl; 
    result = num1|num2;
    cout<<"num1 | num2: "<<result<<endl;
    result = num1 | num2;

    cout<<"num1 | num2: "<<result<<endl;

    result = num1 ^ num2;

    cout<<"num1^num2: "<<result<<endl;

    result = ~num1;

    cout<<"~num1: "<<result<<endl;

    result = num1 << 2;

    cout<<"num1 << 2: "<<result<<endl;

    result = num1 >> 2;

    cout<<"num1 >> 2: "<<result;

    return 0;
}