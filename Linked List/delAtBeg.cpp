#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

};
void delattBegCHL(node* &header, node* &tail, int value) {
    node* newnode = new node();
    newnode->data=value;
    newnode->next=header->next;
    header->next=newnode;
    tail->next=header;

}
int main() {
    int n;
    cin>>n;
    node* header= new node();









    header->data=0;
    header->next=NULL;
    node* tail=header;
    for(int i = 0; i<n; i++){
        node* newnode = new node();
        cin>>newnode->data;
        newnode->next=NULL;
        if(header->next=NULL){

            header->next=newnode;
            tail= newnode;

        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    node*i = header;
    while(i!=0){
    cout<<i->data<<" ";
    i= i->next;
    }
    tail->next=header;
    

    
}
