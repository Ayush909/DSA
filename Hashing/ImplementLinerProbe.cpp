// Implement hash table with open addressing linear probing

#include <iostream>
using namespace std;

struct MyHash{
    int* arr;
    int cap,size;

    MyHash(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
        for(int i=0; i<cap; i++){
            arr[i] = -1;
        }

    }

    int hash(int key){
        return key % cap;
    }

    void search(int key){
        int h = hash(key);
        int i = h;
        while( arr[i] != -1){
            if(arr[i] == key){
                printf("key %d found at %d\n",key,i);
                return;
            }
            i = (i+1) % cap;
            if( i == h){
                cout<<"Not found\n";
                return ;
            }
        }
        cout<<"Not found\n";
        return;
    }

    void insert(int key){
        if(size == cap){
            cout<<"hash table is full\n";
            return;
        }
        int h = hash(key);
        int i = h;



        while( arr[i] != -1 && arr[i] != -2 && arr[i] != key){
            i = (i+1) % cap;
        }

        if(arr[i] == key){
            printf("key %d already present\n",key);
            return ;
        }else{
            arr[i] = key;
            size++;
            return;
        }
    }

    void erase(int key){

        int h = hash(key);
        int i = h;

        while(arr[i] != -1){
            if(arr[i] == key){
                arr[i] = -2;
                cout<<"Erased key: "<<key<<endl;
                return;
            }
            i = (i+1) % cap;
            if( i == h){
                cout<<"Not found\n";
                return ;
            }

        }
        cout<<"Not found\n";
        return ;
    }

    void print(){
        for(int i=0; i<cap; i++){
            cout<<arr[i]<<" ";
        }
    }



};

int main()
{
     MyHash h(7);
     h.insert(63);
     h.insert(51);
     h.insert(50);
     h.insert(45);
     h.erase(45);
     h.insert(45);
     h.print();

    return 0;
}
