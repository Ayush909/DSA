// Find whether an array2 is subset of another array1
//Using hashing: unordered set
// Time complexity: O(n + m)
// It doesnt handle case when there are duplicates in arr2
#include <iostream>
#include <unordered_set>
using namespace std;

void issubset(int arr1[],int arr2[],int n,int m){
    unordered_set<int> set1;

    for(int i=0; i<n; i++){
        set1.insert(arr1[i]);
    }

    bool issub = true;
    for(int i=0; i<m; i++){

        if(!set1.count(arr2[i])){
            issub = false;
            break;
        }

    }

    if(issub == true){
        cout<<"It is subset"<<endl;
    }else{
        cout<<"It is not a subset"<<endl;
    }
}


int main()
{
   int arr1[] = {11, 1, 13, 21, 3, 7};
   int arr2[] = {11, 3, 7, 1,2};
   int n = sizeof(arr1) / sizeof(arr1[0]);
   int m = sizeof(arr2) / sizeof(arr2[0]);

   issubset(arr1,arr2,n,m);
    return 0;
}

// Method 2: Sort two arrays first and then compare arr1[j] & arr2[i]
// Time com: O(nlogn + mlogm)
#include <iostream>
#include <algorithm>
using namespace std;

bool issubset(int arr1[],int arr2[],int m,int n){

    if(m<n){
        return 0;
    }

    sort(arr1,arr1 + m);
    sort(arr2, arr2 + n);

    int i=0, j=0;
    while(i<n && j<m){

        if(arr1[j] < arr2[i]){
            j++;
        }else if( arr1[j] == arr2[i]){
            i++;
            j++;
        }else if(arr1[j] > arr2[i]){
            return 0;
        }
    }
    return (i<n) ? false: true;

}

int main()
{
   int arr1[] = {11, 1, 13, 21, 3, 7};
   int arr2[] = {11, 3, 7, 1};
   int m = sizeof(arr1) / sizeof(arr1[0]);
   int n = sizeof(arr2) / sizeof(arr2[0]);

   cout<<issubset(arr1,arr2,m,n);
   return 0;
}