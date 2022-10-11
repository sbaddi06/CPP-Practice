#include<bits/stdc++.h>
using namespace std;

class list1{
    public:
    int data;
    list1* next;
    list1(int x){
        data=x;
        next=NULL;
    }
};

int main() {
    list1 *dummy=new list1(-1);
    list1 *head=dummy;
    for(int i=0;i<5;i++){
        int num;
        cin>>num;
        dummy->next=new list1(num);
        dummy=dummy->next;
    }
    list1 *cur=head->next;
    int cnt=0;
    while(cur!=NULL){
        cnt++;
        cur=cur->next;  
    }
    list1 *curr=head->next;
    int n;
    cin>>n;
    int loop=cnt-n;
    while(loop--){
        curr=curr->next;
    }
    cout<<curr->data;
    return 0;
}
