//Find first occurrence of given value

//Method 1: Recursive binary Search
#include <iostream>
using namespace std;

int fun(int arr[],int low,int high,int value){

    if(low > high){
        return -1;
    }

    int mid = (low + high) / 2;


    if(arr[mid] == value){
       if(mid == 0 || arr[mid -1] != arr[mid]){
            return mid;
       }else{
           return fun(arr,low,mid-1,value);
       }
    }else if( value < arr[mid]){
        return fun(arr,low,mid - 1,value);
    }else{
        return fun(arr,mid + 1,high,value);
    }
}


int main(){
    int n = 7;
    int arr[n] = {1,10,10,10,20,20,40};

    cout<<fun(arr,0,n-1,10);

   return 0;
}

//Method 2: Iterative binary search

#include <iostream>
using namespace std;

int fun(int arr[],int low,int high,int value){
    int mid;
    while(low <= high){
        mid = (low+high) / 2;
        if(value > arr[mid]){
            low = mid + 1;
        }else if(value < arr[mid]){
            high = mid - 1;
        }else{
            if(mid == 0 || arr[mid - 1] != arr[mid]){
                return mid;
            }else{
                high = mid -1;
            }
        }
    }
    return -1;
}


int main(){
    int n = 7;
    int arr[n] = {1,10,10,10,20,20,40};

    cout<<fun(arr,0,n-1,10);

   return 0;
}

