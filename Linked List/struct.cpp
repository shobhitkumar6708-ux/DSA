// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node * next;
// };
// int main () {
//     Node * A = new Node();
//     Node * B = new Node();
//     A -> data = 3;
//     A-> next = B;
//     B-> data = 4;
//     B -> next = NULL;
//     Node * head = A;
// //     Node * i = head;
// // while (i != NULL){
// //     i = i-> next;
// //     cout<<i->data;
// // }

// for(Node * i = head; i!= NULL; i=i-> next){
    
//     cout<<i-> data<<endl;
// }

// return 0;

// }   


#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
int main() {
    node* a= new node();
    node* b = new node();
    node* c = new node();
    a->data=3;
    b->data=5;
    c->data=4;
    a->next=b;
    b->next=c;
    c->next=NULL;
    node* head = a;
    node * current = head;
    while(current!= NULL){
        cout<<current->data<<" ";
        current=current->next;
        
    }


}

