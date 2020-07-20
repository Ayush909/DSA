//This uses circular array, All operations are O(1)

#include <iostream>
#include <string>
using namespace std;

struct Queue{
    int front,cap,size;
    int* arr;
    Queue(int c){
        cap = c;
        size = 0;
        front = 0;
        arr = new int[cap];
    }

int getrearindex(){

    return (front + size -1) % cap;// % is done so that after last index..it can move to first index..
                                   //..have to do for circular array

}

int getfront(){
    if(size == 0){
        printf("\nQueues is Empty\n");
    }else{
        cout<<"Front is: "<<arr[front]<<endl;
    }
}

void enqueue(int value){
    if(size == cap){
        printf("\nQueues is full\n");
        return;
    }else{
        int rear = getrearindex();
        rear = (rear + 1) % cap;// % is done so that after last index..it can move to first index..
                                //..have to do for circular array
        arr[rear] = value;
        size++;
    }
}

void dequeue(){
    if(size == 0){
        printf("\nQueues is Empty\n");
        return;
    }else{
        front = (front + 1)% cap;
        size--;
    }
}

};


int main(){

    Queue q(4);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(14);

    q.getfront();
    return 0;
}
