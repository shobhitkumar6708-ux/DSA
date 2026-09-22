#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

};
void delPos(node* &head, int pos) {
    node* temp = head;
    for(int i =0; i<pos-1; i++){
        temp = temp->next;

    }
    node* target = temp->next;
    temp-> next = temp->next->next;
    temp->next= target->next;
    delete target;

}
int main(){
    node* a=  new node();
    node* b= new node();
    
    a->data=1;
    a->next=b;

    b->data=10;
    b->data=20;

    node* head =a;
    delPos(head, 1);

    







   



}


