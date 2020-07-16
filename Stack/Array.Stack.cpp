// Stack using Array Implementation

#include <iostream>
using namespace std;

int top = -1;

void insert(int arr[],int n,int value){
    if(top == n-1){
        cout<<"overflow"<<endl;
        return;
    }
    top++;
    arr[top] = value;
}

void pop(int arr[]){
    int res;
    if(top == -1){
        cout<<"nothing in the stack"<<endl;
        return;
    }
    res = arr[top];
    top--;
    cout<<"popped: "<<res<<endl;

}

void printarr(int arr[]){
    cout<<"Array is : ";
    for(int i=0;i<top+1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n = 5;
    int arr[n];
    insert(arr,n,2);
    insert(arr,n,4);
    insert(arr,n,6);
    insert(arr,n,8);
    insert(arr,n,10);

    pop(arr);
    pop(arr);
    pop(arr);
    pop(arr);

    printarr(arr);
	return 0;
}
