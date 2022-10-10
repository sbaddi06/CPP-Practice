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
        list1* temp=new list1(n);
        dummy->next=temp;
        dummy=dummy->next;
    }
    
    list1 *fast=head->next;
    list1 *slow=head->next;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<< slow->data;
}
