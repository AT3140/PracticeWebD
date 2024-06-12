/*
ideally when parent class pointer is supposed to be used to destroy a derived class, a virtual destructor should be declared at parent 
*/

#include <iostream>

using namespace std;

class A {
    public:
        ~A(){
            cout<<"Destructor A called!"<<endl;
        }
};
class B {
    public:
        virtual ~B(){
            cout<<"Destructor B called!"<<endl;
        }
};
class C: public A, public B {
    public:
        ~C(){
            cout<<"Destructor C called!"<<endl;
        }
};

int main(){
    A* a = new C();
    B* b = new C();
    delete a;
    cout<<"\n";
    delete b;
    return 0;
}