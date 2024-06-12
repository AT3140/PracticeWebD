// Sequence Containers
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <forward_list>
#include <list>
#include <random>

using namespace std;

void iterate(auto a){
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
}

// arrays


// vector (dynamic arrays)
void vectorstl() {
    // initialization
    vector<int> v = {1, 4, 3, 2};
    vector<int> v1{3,4,2,2,5};
    vector<int> v2 (4);
    cout<<"vector\n";
    iterate(v1);
    iterate(v2);

    // capacity
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    // sort
    sort(v1.begin(), v1.end());
    iterate(v1);
    // reverse
    reverse(v1.begin(), v1.end());
    iterate(v1);
    // shuffle
    shuffle(v1.begin(), v1.end(), default_random_engine(0));
    iterate(v1);

    // Access : O(1)
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v[2]<<endl;

    // push_back pop_back : O(1)
    // insert deletion : O(n)
    v1.emplace(find(v1.begin(), v1.end(), 3), 4);
    iterate(v1);
    
    // foreach
    iterate(v1);
    // remove a value
    v1.erase(find(v1.begin(), v1.end(), 2));
    
    iterate(v1);
}


// deque (based on dynamic arrays)
void dequestl(){
    cout<<"deque\n";
    //initialization
    deque<int> dq{3,2,3,6};

    // access
    // Complexity : Constant
    cout<<dq[2]<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    // insertion
    // front/back: O(1) or constant
    // rest : O(n) where n is distance from closest end
    dq.push_back(9);
    dq.emplace_back(10);
    dq.push_front(1);
    dq.emplace_front(0);

    // size
    // constant time
    cout<<"Size : "<<dq.size()<<endl;

    //insert at position k
    deque<int>::iterator it = dq.begin();
    int k = 2;
    for(int i=0; i<k; i++){
        ++it;
    }
    dq.insert(it, 20);
    iterate(dq);
}

// forward list (singly linked list)
void forwardstl(){
    cout<<"fstl\n";
    forward_list<int> fstl{4,2,5,6};

    // Iterator
    iterate(fstl);

    // Access
    cout<<fstl.front()<<endl;
    // cout<<fstl.back()<<endl;
    
    // Insertion
    fstl.push_front(1);
    fstl.emplace_after(fstl.begin(), 4);

    iterate(fstl);

    // Deletion
    fstl.pop_front();
    // remove
    // erase
    iterate(fstl);

    // Remove Duplications
    fstl.unique();
    iterate(fstl);

    // Sort
    fstl.sort();
    iterate(fstl);
}

// list (doubly linked list)
void liststl(){
    cout<<"List\n";
    // Constructor
    list<int> lt{4,2,1,5};
    iterate(lt);

    // Access
    // no indexing [i] allowed
    cout<<lt.front()<<endl;
    cout<<lt.back()<<endl;

    // Insertion
    lt.push_front(3);
    lt.push_back(9);
    lt.insert(lt.begin(), 34);
    iterate(lt);

    // Deletion
    lt.pop_front(); iterate(lt);
    lt.pop_back(); iterate(lt); 
    lt.remove(2); iterate(lt);
    lt.erase(lt.begin()); iterate(lt);
}

int main() {
    vectorstl();
    dequestl();
    forwardstl();
    liststl();

    // string
    // insert a letter
    string s = "abcdef";
    s.insert(1, "g");
    s.insert(find(s.begin(), s.end(), 'd'), 'y');

    // first and last character using iterator and index
    cout<<s<<endl;
    cout<<*(s.begin())<<endl;
    cout<<s[0]<<endl;
    cout<<*(--s.end())<<endl;
    // cout<<s[-1]<<endl; // undefined behaviour
    cout<<s[s.size()-1]<<endl;   

    // update a letter
    // Note: strings in c++ are not immutable
    cout<<s<<endl;
    s[2] = 't';
    cout<<s<<endl;
    *(find(s.begin(), s.end(), 'd')) = 'w';


    // erase a letter
    cout<<s<<endl;
    s.erase(2,2);
    cout<<s<<endl;
    s.erase();
    cout<<"string erased! "<<s<<endl;

    return 0;
}