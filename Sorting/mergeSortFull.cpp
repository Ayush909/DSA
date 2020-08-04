#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high,int s){
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];

    for(int i=0; i< n1; i++){
        left[i] = arr[low + i];
    }

    for(int i=0; i<n2; i++){
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low; 
    while( i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }else{
            arr[k++] = right[j++];
        }
    }
    while(i<n1){
        arr[k++] = left[i++];
    }
    while(j<n2){
        arr[k++] = right[j++];
    }

}

void mergesort(int arr[],int low, int high, int size){

    if(low < high){
        int mid = low + (high - low)/2;

        mergesort(arr,low,mid,size);
        mergesort(arr,mid+1,high,size);
        merge(arr,lpw,mid,high,size);
    }

}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}



int main(){

   int arr[] = {10,15,20,25,30,5,8,10,13,15,16,20};
   int l = 0, h = 11;
   int n = sizeof(arr) / sizeof(arr[0]);

   mergesort(arr,0,n-1,n);

   printArray(arr,n);

   return 0;

}
