#include <iostream>
#include <cmath>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;

void findMiddle(){
    struct Node* fptr = head;
    struct Node* sptr = head;
    if(head!= NULL){
        while(fptr != NULL && fptr->next!=NULL){
            fptr = fptr->next->next;
            sptr = sptr->next;
        }
        cout<<"Middle element is "<<sptr->data;
    }

}

void prepend(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void Printlist(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    head = NULL;
    prepend(2);
    prepend(21);
    prepend(16);
    prepend(13);
    prepend(8);
    prepend(9);
    Printlist();
    findMiddle();


    return 0;
}
