// Method1 : Naive: O(m * n)

#include <iostream>
using namespace std;

void intersection(int *arr1,int *arr2,int m,int n){

    for(int i=0; i<m; i++){

        if(i>0 && *(arr1 + i) == *(arr1 + i - 1)){
            continue;
        }

        for(int j=0; j<n; j++){
            if(*(arr1 + i) == *(arr2 + j)){
                cout<<*(arr2 + j)<<" ";
                break;
            }
        }

    }
}


int main(){
    int arr1[] = {3,5,10,10,10,15,15,20};
    int arr2[] = {5,10,10,15,30};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1,arr2,m,n);
    return 0;
}

// Method 2 : 