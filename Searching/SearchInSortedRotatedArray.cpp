//Search an element in a sorted rotated array
//Approach : Using binary search 
//First check if mid > low, if yes, then left half is sorted, then check 
//if the value to be found lies within range of low to mid, if yes, then high = mid -1,
// else : low = mid + 1(go and search in right half)

// Similary for check if high > mid, if yes, check value lies withrange of mid to high, if yes, low = mid+1
// else high = mid -1


#include <iostream>
using namespace std;

int fun(int arr[],int low,int high,int value){
    int mid;
    while(low<=high){
        mid = ( low + high ) / 2;

        if(arr[mid] == value){
            return mid;
        }

        if(arr[mid] >= arr[low]){
            if(value >= arr[low] && value <= arr[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            if(value >= arr[mid] && value<= arr[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}


int main(){
    int n = 7;
    int arr[n] = {100,20,30,3,5,8,9};

    cout<<fun(arr,0,n-1,8);

   return 0;
}
