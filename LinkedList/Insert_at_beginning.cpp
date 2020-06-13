#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
struct Node* head;

void Insert(int value){
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  head = newNode;
}
void printList(){
  Node* temp = head;
  cout<<"List is : ";
  while( temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int main(){
   
    head = NULL;
    cout<<"How many number?";
    int n,i,value;
    cin>>n;

    for(i=0;i<n;i++){
      cout<<"enter the number: "<<endl;
      cin>>value;
      Insert(value);
      printList();
    }    


    return 0 ;
}