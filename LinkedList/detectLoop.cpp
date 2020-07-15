#include <iostream>
#include <cmath>
using namespace std;

struct Node{
    int data;
    int flag;
    Node* next;
};

struct Node* head;

/*void findMiddle(){
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
int count = 0;
int frequency(Node* head,int key){
    if(head == NULL){
        return count;
    }
    if(head->data == key){
        count++;
    }
    return frequency(head->next,key);
}*/

bool isloop(Node* head){

    while(head != NULL){
        if(head->flag == 1){
            return true;
        }
        head->flag = 1;
        head = head->next;
    }
    return false;
}

void prepend(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    newNode->flag = 0;
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

    prepend(1);
    prepend(13);
    prepend(2);
    prepend(9);
    Printlist();

    //create a loop

    head->next->next->next = head;

    if(isloop(head)){
        cout<<"Loop is there";
    }else{
        cout<<"no loop";
    }



    return 0;
}
