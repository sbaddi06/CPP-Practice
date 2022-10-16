#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> v={"cat","mat","lat","mat","cat"};
    map<string,int> m;
    
    for(auto it:v){
        m[it]++;
    }
    
     for(auto it:m){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }
}
