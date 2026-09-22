#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

};
void insertBegCl(node* &head, int value){
    node* newnode = new node();
    newnode->data=value;
    newnode->next=head;
    head=newnode;

void insertEndCl(node* &head, node* &tail, int value){
    node* newnode=newnode=new node();
    newnode->data=value;
    newnode->next=head;
    tail->next=newnode;
    tail=newnode;
}
}
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        node* newnode = new node();
        cin>>newnode->data;
        newnode->next=NULL;

        if(head==NULL){
            head==newnode;
            tail=newnode;
        }
        else {
            tail->next=newnode;
            tail=newnode;
        }
    }

    tail->next=head;
    node* current=head;

    do{
        cout<<current->data;
        current->next;
    
        
    } while (current!=NULL);

    while(current!=head->data)
    current=current->next;
     
}
