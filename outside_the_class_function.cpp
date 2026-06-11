#include<iostream>
using namespace std;

class circle{//class definition
    private://data members
    float rad;

    public://member functions
    void getradius(); //function declaration
    void calc_area();
};

void circle::getradius(){//function definition outside the class
    cout<<"Enter radius:"<<endl;//function definition outside the class
    cin>>rad;
}

void circle::calc_area(){
    float a;
    a=3.14*rad*rad;
    cout<<"Area of circle is:"<<a<<endl;
}

int main(){
    circle c;//object creation
    c.getradius();//function call
    c.calc_area();
    return 0;
}