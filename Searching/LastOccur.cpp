//Find first occurrence of given value
//Method: Iterative binary Search
#include <iostream>
using namespace std;

int fun(int arr[],int low,int high,int value,int n){
    int mid;

    while(low <= high){
        mid = (low+high) / 2;

        if(value > arr[mid]){
            low = mid + 1;
        }else if(value < arr[mid]){
            high = mid - 1;
        }else{
            if(mid ==  n-1 || arr[mid + 1] != arr[mid]){
                return mid;
            }else{
                low = mid  + 1;
            }
        }
    }
    return -1;
}


int main(){
    int n = 7;
    int arr[n] = {1,10,10,10,20,20,40};

    cout<<fun(arr,0,n-1,20,n);

   return 0;
}
