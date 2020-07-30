//bubble sort is a stable algorithm, i.e. if two adjacent numbers are same or are in order then no swapping happens
// O(N2)
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main(){

    int arr[] = {12,3,10,8,13,20,15};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n-1; i++){

        int swapped = false; // this is used to check if array is already sorted or becomes sorted in the middle
        // so that we dont have to iterate i to <n-1

        for(int j=0; j<n-1-i; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    
    for(auto i: arr){
        cout<<i<<" ";
    }


    return 0;
}
