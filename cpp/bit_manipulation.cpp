#include<iostream>

using namespace std;



int main(){
    int a = 3;
    int b = 4;
    //check if even or odd
    if((b & 1) == 0) cout<<"Even\n";// Note: == is higher in precedence than &
    else cout<<"Odd\n";

    //set nth bit of a number
    int n = 3;
    int c = 0;
    c = c | (1 << n);
    cout<<"c: "<<c<<endl;

    // clear nth bit
    n = 1;
    a = a & ~(1 << n);
    cout<<"a: "<<a<<endl;

    // toggle nth bit
    n = 2;
    a = a ^ (1 << n);
    cout<<"a: "<<a<<endl;

    // counting the number of set bits
    int count = 0;
    while(a){
        count += a & 1;
        a >>= 1;
    }
    cout<<"no of set bits: "<<count<<endl;

    return 0;
}