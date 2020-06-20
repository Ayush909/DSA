//5->10->13->24->34
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
struct Node* head; //global variable

//insert at beginning
void prepend(int value){
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  head = newNode;
}
//printting the entire list
void printList(){
  Node* temp = head;
  cout<<"List is : ";
  while( temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
//traversing the LL
Node* traverse(int index){
  int counter = 0;
  Node* temp = head;
  while(counter != index){
    temp = temp->next;
    counter++;
  }
  return temp;
}
//Insert at nth position in LL
void InsertAtNth(int index, int value){
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;
  if(index == 0){
    return prepend(value);
  }
  Node* leader = traverse(index-1);
  Node* handler = leader->next;
  leader->next = newNode;
  newNode->next = handler;

}

//delete at nth position
void deleteAtNth(int index){

  if(index == 0 ){
    Node* temp1 = head;
    head = temp1->next;
    delete temp1;
    return;
  }

  Node* temp1 = traverse(index-1);
  Node* temp2 = temp1->next;
  temp1->next = temp2->next;
  delete temp2;
}

int main(){
   
    head = NULL; //list is empty at this stage
    
    prepend(34);    
    prepend(24);    
    prepend(13);    
    prepend(10);    
    prepend(5);
    printList(); 
    InsertAtNth(0, 99);  
    printList();
    deleteAtNth(0);
    printList(); 

    return 0 ;
}