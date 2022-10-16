#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,1,2};
    set<int> s;
    
    for(auto it:v){
        s.insert(it);
    }
    
     for(auto it:s){
        cout<<it<<" ";
    }
}
