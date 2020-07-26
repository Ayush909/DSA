//Note: Time complexity of recursive binary search : O(logN)
//Note: Space complexity of recursive binary search : O(logN)

//Note: Time complexity of normal binary search : O(logN)
//Note: Space complexity of normal binary search : O(1)

#include <iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int value ){

    if(low > high){
        return -1;
    }

    int mid = (low+high) / 2;

    if(arr[mid] == value){
        return mid;
    }else if(value < arr[mid]){
        return binarySearch(arr,low,mid-1,value);
    }else{
        return binarySearch(arr,mid+1,high,value);
    }

}

int main(){
   int n =5;
   int arr[n] = {10,20,30,40,50};

   cout<<binarySearch(arr,0,n-1,20);

   return 0;
}
