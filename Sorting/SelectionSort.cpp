// Selection Sort: O(n2)
// It is not stable algorithm
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main(){

    int arr[] = {1,3,10,8,2,20,15};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }

    for(auto c: arr){
        cout<<c<<" ";
    }

    return 0;
}
