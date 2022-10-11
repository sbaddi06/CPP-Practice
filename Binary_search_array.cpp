#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[100];
    int n;
    cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    int i=0,j=n-1;
    int target;
    cin>>target;
    while(i<j){
        int mid=(i+j)/2;
        if(arr[mid]==target){
            cout<<"Found";
            return 0;
        }
        if(arr[mid]<target){
          i=mid+1;
        }else{
            j=mid-1;
        }
    }
    return 0;
}
