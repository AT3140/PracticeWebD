/*
Constexpr Restrictions: 
    - no dynamic memory allocation
    - no I/O operations
    - no calls to non-constexpr functions.
*/

#include<iostream>

using namespace std;

int foo1();

// note: not constexpr class !
class A{
    private:
        int x_, y_;

    public:
        constexpr A(int x, int y) : x_(x), y_(y) {}
        constexpr int getX() const { return x_; }
        constexpr int getY() const { return y_; }
};

// constexpr evaluation during compile time
constexpr int foo(){
    /* 
    Errors:
        int* a = (int*)malloc(sizeof(int)); // Dynamic Allocation
        int a = foo1(); // non-constexpr function call
        cout<<a; // I/O operation
    */

    int a = 5;
    return 3;
}

int main(){
    // constexpr variables
    constexpr int a = 5;
    constexpr int b = 3;
    constexpr int c = a + b;
    printf("a: %d b: %d c: %d\n",a,b,c);

    // constexpr functions
    constexpr int d = foo();
    printf("d: %d\n", d);

    // constexpr constructors
    constexpr A obj = A(3, 4);
    constexpr int e = obj.getX();
    constexpr int f = obj.getY();
    printf("e: %d f: %d\n", e, f);

    return 0;
}

int foo1(){
    return 2;
}