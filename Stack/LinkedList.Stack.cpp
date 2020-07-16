//LinkedList implementation of stack

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;

void push(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void pop(){
    if(head == NULL){
        return;
    }
    int res = head->data;
    Node* temp = head;
    head = head->next;
    delete(temp);

}

void printList(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    head = NULL;
    push(2);
    push(4);
    push(6);
    push(8);
    push(10);
    printList();

    cout<<"After pop:"<<endl;
    pop();
    pop();

    printList();


    return 0;
}
