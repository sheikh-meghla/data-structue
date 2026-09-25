#include<bits/stdc++.h>
using namespace std;

int main() {
    
    list<int> l = {1,2,3,4,5};
    list<int> l3 = {7,8,9,1};
    list<int> l2;
    l2 = l;
    // l2.assign(l.begin(),l.end());


    // l2.push_back(6);
    // l2.push_front(0);
    // l2.pop_back();
    // l2.pop_front();
    // cout << *next(l2.begin(),2)<<endl;
    // l.insert(next(l2.begin(),2),100);
    l.insert(next(l2.begin(),2),l3.begin(),l3.end());
    for(int val : l2){
        cout << val << " ";
    }
    return 0;
}