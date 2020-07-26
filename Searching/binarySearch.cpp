//Note: Time complexity of normal binary search : O(logN)
//Note: Space complexity of normal binary search : O(1)

//Note: Time complexity of recursive binary search : O(logN)
//Note: Space complexity of recursive binary search : O(logN)

#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int value ){
    int low = 0, high = n-1;
    int mid;

    while(low<=high){
        mid = (low+high)/2;

        if(arr[mid]== value){
            return mid;
        }else if( value <arr[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
   int n =5;
   int arr[n] = {10,20,30,40,50};

   cout<<binarySearch(arr,n,40);

   return 0;
}
