
// Associative Containers
#include<iostream>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

void iterate(auto a){
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
}

void iterate_map(auto mp){
    for(auto p : mp){
        cout<<p.first<<":"<<p.second<<" ";
    }
    cout<<endl;
}

// Ordered 
// set (trees)
void set_stl(){
    set<int> s {5,6,2};
    // insert
    s.insert(4);
    iterate(s);
    // delete
    s.erase(2);
    iterate(s);
    s.clear();
    cout<<s.empty()<<endl;
}

// map (associative arrays)
void map_stl(){
    map<int,int> mp;
    mp[4] = 6;
    mp[5] = 9;
    iterate_map(mp);
    mp.erase(4);
    iterate_map(mp);
    mp.clear();
    cout<<mp.empty()<<endl;
}
// multiset ()
// multimap ()

// Unordered
// unordered_set
// unordered_multiset
// unordered_map
// unordered_multimap

int main(){
    set_stl();
    cout<<endl;
    map_stl();
    return 0;
}