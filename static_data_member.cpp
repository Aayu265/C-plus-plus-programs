#include<iostream>
using namespace std;

class mercedes{
    public:
    // declaration of static data member. Static member belong to the class itself, not to individual object.
    static int modelcount;
    //constructor - automatically called when a mercedes object of the class is created. It is used to initialize the data members of the class.
    mercedes(){
        //increment modelcount for each object created. modelcount is static , it keeps its value across all objects.
        modelcount++;
    }
};

//defining and initializing the static data member outside the class. Static members must be defined outside the class definition, and they are shared among all instances of the class.
//this line allocates memory for the static member and initializes it to 0. It is necessary to define the static member outside the class to avoid linker errors, as it is not associated with any particular object.
//must be done in exactly one source file, and it should be done before any use of the static member.

int mercedes::modelcount=0;

int main(){
    //creating three objects of the mercedes class. Each time a mercedes object is created, the constructor is called, which increments the modelcount static member.
    mercedes m1;//creates first mercedes object, modelcount becomes 1
    mercedes m2;//creates second mercedes object, modelcount becomes 2
    mercedes m3;//creates third mercedes object, modelcount becomes 3

    //static members can be accessed using the class name, without needing to create an object. Here we access the modelcount static member using the class name mercedes.
    cout<<"Total mercedes models: "<<mercedes::modelcount<<endl;
    return 0;
}