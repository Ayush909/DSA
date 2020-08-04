// O(m + n)

//Approach: compare a[i] & b[j], whichever is small, print it and increment corresponding i or j
#include <iostream>
using namespace std;

void mergeTwoSortedArr(int a[],int b[],int m,int n){
    int i=0,j=0;

    while(i<m && j<n){
        if(a[i] < b[j]){
            cout<<a[i]<<" ";
            i++;
        }else{
            cout<<b[j]<<" ";
            j++;
        }
    }

    //when some elements are left in one of the array, print them directly here
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}

int main(){

   int a[] = {10,15,20,25,30};
   int b[] = {5,8,10,13,15,16,20};
   int m = sizeof(a) / sizeof(a[0]);
   int n = sizeof(b) / sizeof(b[0]);

   mergeTwoSortedArr(a,b,m,n);

   return 0;

}
