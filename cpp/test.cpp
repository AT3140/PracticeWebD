#include <iostream>
#include <vector>

using namespace std;
int main()
{
    std::cout<<"Hello World";
    vector<int> v(4);
    for(int i: v){
        cout<<i<<" ";
    }

    return 0;
}