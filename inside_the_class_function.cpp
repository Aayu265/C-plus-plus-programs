#include<iostream>
using namespace std;

class circle{
    private:
    //data members
    float rad;

    public:
    //member functions
    void getradius(){ 
        cout<<"Enter radius:"<<endl;
        cin>>rad;
    };

    void calc_area(){
        float a;
        a=3.14*rad*rad;
        cout<<"Area of circle is:"<<a<<endl;
    };

    int main(){
        circle c;
        c.getradius();
        c.calc_area();
        return 0;
     }
};