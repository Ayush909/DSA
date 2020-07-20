
//LinkedList Implementation of Queue...All O(1)

#include <iostream>
#include <string>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

struct Queue{
    Node* front,*rear;
    Queue(){
        front = rear = NULL;
    }

void enqueue(int value){
    Node* newNode = new Node(value);
    if(front == NULL){
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue(){
    if(front == NULL){
        return;
    }
    Node* temp = front;
    front = front->next;
    if(front == NULL){
        rear = NULL;
    }
    delete(temp);

}

};


int main(){
    Queue q;
    q.enqueue(10);
    return 0;
}
