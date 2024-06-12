#include<iostream>

using namespace std;

int main(){
    // [] can be used with pointers to dereference
    int num = 0;
    int* a = &num;
    int** b = &a;
    // check
    cout<<a[0]<<endl;
    cout<<*a<<endl;
    cout<<b[0][0]<<endl;
    cout<<**b<<endl;

    // 2D array using Dyn alloc
    int rows = 5, cols = 3;
    int** arr = new int*[rows];
    for(int i=0; i<rows; i++){
        arr[i] = new int[cols];
        for(int j=0; j<cols; j++){
            arr[i][j] = i+j;
        }
    }
    // check
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Normal declaration of 2D
    int a[rows][cols];
}