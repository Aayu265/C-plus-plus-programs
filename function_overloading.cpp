#include<iostream>
using namespace std;

//overload functions to calculate area
//area of circle
double area(double radius){
    return 3.14159 * radius * radius;
}   

//area of rectangle
double area(double length, double width){
    return length * width;
}

int main(){
    cout<<"Area of circle (r=5):"<<
    area(5.0)<<endl; //calls area for circle

    cout<<"Area of rectangle (4x5):"<<
    area(4.0, 5.0)<<endl; //calls area for rectangle
return 0;
}