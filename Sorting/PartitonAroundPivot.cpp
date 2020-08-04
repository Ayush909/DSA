// Partition for quick sort
// Naive approach : Can give any pivot as input and traversed to all element in array and store in temp
// first populate temp with elements <= pivot
// then populate temp with elements >pivot
// Eg. : {5,13,6,9,12,11,8} => low=0, high = n - 1, pivot = high
// Output = {5,6,8,13,9,12,11} 
// Time: O(n) & Space: O(n)

#include <iostream>
using namespace std;

void partition(int arr[],int n,int p){

    int l = 0;
    int h = n-1;

    int temp[n],index = 0;

    for(int i=l; i<=h; i++){
        if(arr[i] <= arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=l; i<=h; i++){
        if(arr[i] > arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
       arr[i] = temp[i];
       cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[] = {5,13,6,9,12,11,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    partition(arr,n,n-1); // we can give any pivot as input

    return 0;
}

// Method 2: Lomuto partition: pivot = last element is fixed
// Only one traversal of the array is required
// Time : O(n) & Space : O(1)
#include <iostream>
using namespace std;

void partition(int arr[],int n){

    int l = 0,h = n-1, p = arr[h];
    int i = -1;

    for(int j=l; j<= h-1; j++){
        if( arr[j] < p ){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h])

    return (i+1);

}

int main()
{
    int arr[] = {5,13,6,9,12,11,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    partition(arr,n);

    return 0;
}

