/*
Friend Function is a feature in OOPs (C++)
Use Cases
- helps manipulating private members of multiple objects
*/
#include<iostream>

using namespace std;

class Friend1; // Forward declaration

class Friend{
    int a;
    int b;

    public:
        Friend(int a, int b){
            this->a = a;
            this->b = b;
        }

        void printMembers(){
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
        }

        friend void foo(Friend&); // allows this function to access non-public members

        friend void foo(Friend, Friend1);
};

class Friend1{
    int c;
    int d;
    public: 
        Friend1 (int c, int d){
            this->c = c;
            this->d = d;
        }

        friend void foo(Friend, Friend1);

};

void foo(Friend& f){
    f.a = f.a + f.b;
}

void foo(Friend f, Friend1 f1){
    printf("Friend: %d %d\nFriend1: %d %d", f.a, f.b, f1.c, f1.d);
}

int main(){
    Friend f1 = Friend(3,4);
    f1.printMembers();
    foo(f1);
    f1.printMembers();
    Friend1 f2 = Friend1(5,6);
    foo(f1, f2);
}