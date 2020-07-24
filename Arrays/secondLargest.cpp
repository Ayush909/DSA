#include <iostream>
using namespace std;

//method 1: Naive
/*int getlargest(int arr[],int n){
    int max = 0;
    for(int i=1;i<n;i++){
        if(arr[i]> arr[max]){
            max = i;
        }
    }
    return max;
}

int getsecondlargest(int arr[],int n){
    int largest = getlargest(arr,n);
    int res = -1;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[largest]){
            if(res == -1){
                res = i;
            }else if(arr[i] > arr[res]){
                res = i;
            }
        }
    }
    return res;

}*/

//Method 2
int getsecondlargest(int arr[],int n){
    int largest = 0, res = -1;

    for(int i=1;i<n;i++){
        if(arr[i] > arr[largest]){

            res = largest;
            largest = i;

        }else if(arr[i] < arr[largest]){

            if(res == -1 || arr[i] > arr[res]){
                res = i ;
            }

        }
    }
    return res;
}


int main(){
 int n = 5;
 int arr[n] = {5,20,12,20,10};

 cout<<getsecondlargest(arr,n);

 return 0;
}
