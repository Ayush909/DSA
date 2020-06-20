#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
struct Node* head; //global variable

//reverse a LL
void reverse(){
  Node *current, *prev, *next;
  prev = NULL;
  current = head;
  while(current != NULL){
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

//insert at the end
void append(int value){
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;

  Node* temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newNode;
  
}

int main(){
   
    head = NULL; //list is empty at this stage

     
    append(5);  
    append(15);  
    append(45);  
    append(35);  
    printList(); 

    reverse();
    printList(); 
    return 0 ;
}