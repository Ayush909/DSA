/*Approach: It is known that Floyd’s Cycle detection algorithm terminates when fast 
and slow pointers meet at a common point. It is also known that this common point is
one of the loop nodes. Store the address of this common point in a pointer variable say (ptr).
Then initialize a counter with 1 and start from the common point and keeps on visiting the next node 
and increasing the counter till the common pointer is reached again.
At that point, the value of the counter will be equal to the length of the loop.
*/


#include <iostream>
#include <cmath>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;

//finds the loop and no of nodes in that loop
//fptr means fast_ptr & sptr means slow_ptr
void isloop(){
    Node* fptr= head;
    Node* sptr = head;
    Node* commonptr,*temp;
    int count=1;

    while(fptr!=NULL && fptr->next!=NULL){
        fptr = fptr->next->next;
        sptr = sptr->next;
        if(sptr == fptr){
            commonptr = fptr;
            temp = commonptr;
            while(temp->next != commonptr){
                count++;
                cout<<"count :"<<count<<endl;
                temp = temp->next;
            }
            cout<<"no of nodes:"<<count;
            return;
        }

    }
    cout<<"No loop detected";


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

    prepend(1);
    prepend(13);
    prepend(2);
    prepend(9);
    prepend(5);
    Printlist();

    //create a loop

    head->next->next->next->next->next = head;

    isloop();



    return 0;
}
