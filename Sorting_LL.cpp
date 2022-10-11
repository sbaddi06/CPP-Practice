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
        int n;
        cin>>n;
        dummy->next=new list1(n);
        dummy=dummy->next;
    }
    list1 *cur=head->next;
    while(cur!=NULL){
        list1* ind=cur->next;
        while(ind!=NULL){
                if(cur->data > ind->data){
                int temp;
                temp=ind->data;
                ind->data=cur->data;
                cur->data=temp;
                    //swap(cur->data,ind->data);
            }
            ind=ind->next;
        } 
        cur=cur->next;
    }
    
     cur=head->next;
    while(cur!=NULL){
        cout<<cur->data<<"->";
        cur=cur->next;  
    }
    cout<<"NULL";
    return 0;
}
