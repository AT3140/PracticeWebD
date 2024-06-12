/*
virtual function

Note:
    Parent p = Child(); // object slicing i.e. Child object is sliced to bind to the Parent reference
    Parent* pt = new Child(); // polymorphism

    Therefore, 
        p calls virtualFoo of the parent while
        pt calls virtualFoo of the child
*/

#include <iostream>

using namespace std;

class Parent {
    public:
        virtual void virtualFoo(){
            cout<<"Parent virtualFoo"<<endl;
        }
        void foo(){
            cout<<"Parent foo"<<endl;
        }
};

class Child : public Parent {
    public:
        void virtualFoo(){
            cout<<"Child virtualFoo"<<endl;
        }
        void foo(){
            cout<<"Child foo"<<endl;
        }
};

int main(){
    Parent p = Child();
    p.virtualFoo();
    p.foo();
    
    Parent* pt = new Child();
    pt->virtualFoo();
    pt->foo();

    Child c = Child();
    c.virtualFoo();
    c.foo();

    // Child* ct = new Parent(); // Error

    return 0;
}