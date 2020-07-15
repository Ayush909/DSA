#include <iostream>
#include <cmath>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;

void prepend(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        newNode-> next = newNode;
        head = newNode;
    }else{
       newNode->next = head->next;
       head->next = newNode;
       int t = head->data;
       head->data = newNode->data;
       newNode->data = t;
    }
}

void append(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        newNode->next = newNode;
        head = newNode;
    }else{
        newNode->next = head->next;
        head->next = newNode;
        int t = head->data;
        head->data = newNode->data;
        newNode->data = t;
        head = newNode;
    }

}

void deleteHead(){
    if(head == NULL){
        return;
    }
    if(head->next == head){
        delete(head);
        return ;
    }
    head->data = head->next->data;
    Node* temp = head->next;
    head->next = head->next->next;
    delete(temp);

}

void deleteKthNode(int k){
    if(head == NULL){
        return;
    }
    if(head->next == head){
        delete(head);
        return;
    }
    if(k==1){
        head->data = head->next->data;
        Node* temp1 = head->next;
        head->next = head->next->next;
        delete(temp1);
        return;
    }

    Node* curr = head;
    for(int i=0;i<k-2;i++){
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete(temp);

}
void Printlist(){
    if(head == NULL){
        return;
    }
    Node* p = head;
    //Method1 using for loop
   /* cout<<head->data<<" ";
    for(Node* p = head->next; p!= head; p = p->next){
        cout<<p->data<<" ";
    }*/
    //method 2: using do while loop
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=head);
}

int main(){
    head = NULL;

    prepend(1);
    prepend(13);
    prepend(2);
    prepend(9);

    //create the circular LL

    head->next->next->next->next = head;

    prepend(10);
    prepend(40);
    append(99);
    deleteKthNode(2);
    Printlist();

    return 0;
}
