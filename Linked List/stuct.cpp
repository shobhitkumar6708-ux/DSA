// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node* next;
// };

// void recIter(node* current){
//     if(current==NULL){
//         return;
//     }
//     cout<<current->data;
//     recIter(current->next);
// }

// int main ()
// {
//     node* a=new node();
//     node* b=new node();
//     a->data=9;
//     a->next=b;

//     b->data=8;
//     b->next=NULL;

//     node* head=a;
//     recIter(head);
// }





#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

void recIter(node* current){
    if(current==NULL){
        return;
    }
    
    recIter(current->next);
    cout<<current->data;
}

int main ()
{
    node* a=new node();
    node* b=new node();
    a->data=9;
    a->next=b;

    b->data=8;
    b->next=NULL;

    node* head=a;
    recIter(head);
}























































