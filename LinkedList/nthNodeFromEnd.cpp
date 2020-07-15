#include <iostream>    // to read and write data
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;//global variable

void nthNodeFromEnd(int n){
    int len=0;
    Node* temp =  head;
    //find the length of LL
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    //if index given is greater than length of LL
    if(n>len){
        cout<<"found valid index";
        return;
    }
    //again make temp = head
    temp = head;

    for(int i=0;i<len-n;i++){
        temp = temp->next;
    }
    cout<<temp->data;
}

//append at the end
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


int main()
{
    head = NULL;
    prepend(13);
    append(2);
    append(15);
    prepend(10);
    append(25);
    printList();
    //10 13 2 15 25
    nthNodeFromEnd(2);


  return 0;
}