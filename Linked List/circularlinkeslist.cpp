#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
int main (){
    node* a=new node();
    node* b=new node();
    node* c=new node();

    a->data=1;
    b->data=2;
    c->data=3;
   
    a->next=b;
    b->next=c;
    c->next=a;
    node* head=a;
    node* slow=head;
    node* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            cout<<"cycle found";
        } else {
            cout<<"cycle not found ";
            break;
        }
       
    }
}
 