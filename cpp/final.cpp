#include<iostream>

using namespace std;

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

class B : public A {
    public: 
        B(){
            cout<<"B Constructor Called"<<endl;
        }

        ~B(){
            cout<<"B Destructor Called"<<endl;
        }
};

// class C : public B {
//     public: 
//         C(){
//             cout<<"C Constructor Called"<<endl;
//         }

//         ~C(){
//             cout<<"C Destructor Called"<<endl;
//         }
// };

int main() {
    // C c = C();

    return 0;
}