#include <iostream>
#include <stack>
#include <queue>
using namespace std;
// Container Adapters

void iterate(auto it){
    for(auto i : it){
        cout<<i<<" ";
    }
    cout<<endl;
}

// stack (based on dynamic arrays)
void stackstl(){
    cout<<"Stack\n";
    stack<int> st;
    st.push(3);
    st.push(1);
    // Note: following not allowed
    // stack<int> st {2,4,1,9};
    // iterate(st);

    // Access
    cout<<"top: "<<st.top()<<endl;

    // Pop
    st.pop();
}

// queue 
// (based on deque by default) User's choice deque/list 
void queuestl(){
    cout<<"Queue\n";
    queue<int> qe;
    qe.push(3);
    qe.push(4);
    qe.pop();
    cout<<"size: "<<qe.size()<<endl;
    cout<<"top: "<<qe.front()<<endl;
    cout<<"Empty: "<<qe.empty()<<endl;
}
// priority queues (heaps)

int main(){
    stackstl();
    queuestl();
    return 0;
}