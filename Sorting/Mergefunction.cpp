// given an array, it is sorted from Low to Mid and Mid + 1 to High
// sort this array
#include <iostream>
using namespace std;

void mergesort(int arr[], int l, int m, int h,int s){
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];

    for(int i=0; i< n1; i++){
        left[i] = arr[l+i];
    }

    for(int i=0; i<n2; i++){
        right[i] = arr[m+1 + i];
    }

    int i = 0, j = 0, k = l;
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

    for(int i=0; i<s; i++){
        cout<<arr[i]<<" ";
    }
}





int main(){

   int arr[] = {10,15,20,25,30,5,8,10,13,15,16,20};
   int l = 0, m = 4, h = 11;
   int s = sizeof(arr) / sizeof(arr[0]);

   mergesort(arr,l,m,h,s);


   return 0;

}
