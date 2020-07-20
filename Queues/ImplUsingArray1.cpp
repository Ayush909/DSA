//This is Naive approach, Dequeue will have O(n) bz of shifting


#include <iostream>
#include <string>
using namespace std;


struct Queue{
    int front,rear,cap,size;
    int* arr;
    Queue(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
    }

//O(1)
void enqueue(int value){
    if(size == cap){
        printf("\nQueue is full\n");
        return;
    }else{
        arr[size] = value;
        size++;
    }
}

//O(n)
void dequeue(){
    if(size == 0){
        printf("\nQueue is Empty\n");
        return;
    }else{
        for(int i=0;i<size-1;i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
}

//O(1)
void getfront(){
    if(size == 0){
        printf("\nQueue is Empty\n");
        return;
    }else{
        cout<<"Front is :"<<arr[0]<<endl;
    }
}

//0(1)
void getrear(){
    if(size == 0){
        printf("\nQueue is Empty\n");
        return;
    }else{
        cout<<"Rear is :"<<arr[size-1]<<endl;
    }
}

};

int main(){
   Queue q(5);

   q.enqueue(10);
   q.enqueue(20);
   q.enqueue(30);
   q.getfront();
   q.getrear();
   cout<<"After removing"<<endl;
   q.dequeue();
   q.getfront();
   q.getrear();


    return 0;
}
