#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

};
int main() {
    int n;
    cout<<"Enter your size: ";
    cin>>n;
    node* head=NULL;
    node* tail=NULL;
    for(int i=0; i<n; i++){
        node* newnode=new node();
        cout<<"Enter your input: ";
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            tail=newnode;
        } else {
        tail->next=newnode;
        tail=newnode;
        }
    }
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast-> next!=NULL){
        slow = slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}
