/*
Multiple inheritance
    Syntax:
        class B : public A1, public A2 {};
    
    Sequence:
        Constructor: (first) A1 - A2 - B (last)
        Destructor : (first) B - A2 - A1 (last)
*/

#include <iostream>

using namespace std;

class A {
    public: 
        A(){
            cout<<"A Constructor Called"<<endl;
        }

        ~A(){
            cout<<"A Destructor Called"<<endl;
        }
};

class B {
    public: 
        B(){
            cout<<"B Constructor Called"<<endl;
        }

        ~B(){
            cout<<"B Destructor Called"<<endl;
        }
};

class C : public B, public A {
    public: 
        C(){
            cout<<"C Constructor Called"<<endl;
        }

        ~C(){
            cout<<"C Destructor Called"<<endl;
        }
};

int main() {
    C c = C();

    return 0;
}