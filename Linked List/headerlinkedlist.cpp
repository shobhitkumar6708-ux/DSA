// #include<iostream>
// using namespace std;

// struct node{


//     int data;
//     node* next;

// };
// int main (){


// node* header = new node();

// node* a = new node();
// node* b = new node();
// node* c = new node();

// a->data = 10;
// b->data = 20;
// c->data = 30;
// a->next = b;
// b->next = c;
// c->next = NULL;

// header->next = a;

// node* temp = header->next;
// while(temp!=NULL){
//     cout<<temp->data<<"-> ";
//     temp=temp->next;
// }
// cout<<"NULL ";
// }

#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

};

int main () {
    node* header = new node();

    node* a = new node();
    node* b = new node();
    node* c = new node();

    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next=b;
    b->next=c;
    c->next=NULL;

    header->next=a;

    node* temp = header->next;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL ";



}