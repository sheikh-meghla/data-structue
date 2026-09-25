#include<bits/stdc++.h>
using namespace std;

int main() {
    

    // list<int>l(5,1);
    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << *it << endl;
    // }


    // copy vector to list
    vector<int> v = {10,20,30,40};
    list<int> l2(v.begin(),v.end());
    // l2.clear();

    l2.resize(8,1);
    for(int val : l2){
        cout << val <<endl; 
    }
    return 0;
}