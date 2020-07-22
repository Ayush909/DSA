//Method 2: Made by me. Space efficient too. 
//Approach: If s1 is full, we will check if top2 != size-1, then push2(x)
// similarly if s2 is full

#include <iostream>
using namespace std;

class twoStacks{
    int *arr;
    int top1,top2;
    int size;

public:
    twoStacks(int n){
        size = n;
        arr = new int(size);
        top1 = n/2 +1;
        top2 = n/2;
    }


    void push1(int x){
        if(top1>0){
            top1--;
            arr[top1] = x;
        }else{
            if(top2 != size-1){//magic happens here
                push2(x);
                return;
            }
            printf("\nStack overflow by element %d\n",x);
            return;
        }
    }

    void push2(int x){
        if(top2<size-1){
            top2++;
            arr[top2] = x;
        }else{
            if(top1 != 0){//magic happens here
                push1(x);
                return;
            }
            printf("\nStack overflow by element %d\n",x);
            return;
        }
    }

    int pop1(){
        if(top1 <= size/2){
            int x = arr[top1];
            top1++;
            return x;
        }else{
            printf("\nStack underflow");
            exit(1);
        }

    }

    int pop2(){
        if(top2 >= size/2+1){
            int x = arr[top2];
            top2++;
            return x;
        }else{
            printf("\nStack underflow");
            exit(1);
        }
    }

};



int main(){
    twoStacks ts(6);
    ts.push1(10);
    ts.push1(12);
    ts.push2(14);
    ts.push1(8);
    ts.push1(11);
    ts.push1(2);
    ts.push1(18);

    return 0;
}
