/*
Is a data member by default private?
*/

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include <cstdlib> //for rand() and srand()
#include <ctime> // for time()
#include <typeinfo> // typeid()

using namespace std;

// Template function
template <typename T> T getContainerAdapter(T t){
    // cout<<typeid(t)<<endl;
    for(int i = 0; i < 5; i++){
        int rand_num = rand() % 10 + 30;
        t.push(rand_num);
    }
    return t;
}

int main(){
    srand(time(0));

    queue<int> q;
    q = getContainerAdapter(q);
    stack<int> st;
    st = getContainerAdapter(st);

    cout<<q.size()<<endl;
    cout<<st.size()<<endl;

    return 0;
}
