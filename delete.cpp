#include<iostream>
using namespace std;
int main()
{
    //dynamically allocate memory 
    int *ptr = new int;

    //assigning value
    *ptr = 100;

    //displaying value
    cout << "Value: " << *ptr << endl;

    //release memory
    delete ptr;
    cout << "Memory released successfully." << endl;
    return 0;
}