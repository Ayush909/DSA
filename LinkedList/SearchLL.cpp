#include <iostream>    // to read and write data
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;//global variable

//insert at the end
void append(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    Node* tail = head;

    if(head == NULL){
        head = newNode;
        return;
    }

    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = newNode;

}

//insert at beginning
void prepend(int value){
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  head = newNode;
}

void printList(){
    Node* temp = head;
    int count = 0;
    while(temp!= NULL){
        count++;
        cout<<temp->data<<" ";
        temp =  temp->next;
    }
    cout<<endl;

}
//searching function
bool searchLL(int value){
    Node* temp = head;

    while(temp != NULL){
        if(temp->data == value){
            return true;
        }
        temp = temp->next;
    }

    return false;

}

int main()
{
    head = NULL;
    prepend(13);
    append(2);
    append(15);
    prepend(10);
    printList();

    cout<<"Answer is "<<searchLL(2);

  return 0;
}