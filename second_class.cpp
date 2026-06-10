//WAP that takes 2 integer inputs and displays the sum of the two numbers.
#include <iostream>
using namespace std;

int main(){
    int num1,num2,sum; //declare three integer variables to store the two numbers and their sum
    cout<<"Enter two numbers: ";//prompt the user to enter two numbers
    cin>>num1>>num2;//read the two numbers from the user input
    sum = num1 + num2;//calculate the sum of the two numbers and store it in the variable 'sum'
    cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<sum<<endl;//display the result to the user
    return 0;//return 0 to indicate that the program ended successfully
}