#include<bits/stdc++.h>
using namespace std;

int main() {
    
    list<int>l(5,1);

    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << *it << endl;
    // }
    for(int val : l){
        cout << val <<endl; 
    }
    return 0;
}