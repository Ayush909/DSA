#include <iostream>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

int minDelete(int arr[],int n){
   unordered_map<int,int> mp;

   for(int i=0; i<n; i++){
        mp[arr[i]]++;
   }
   int max_freq = INT_MIN;

   for(auto it=mp.begin(); it!= mp.end(); it++){
        max_freq = max(max_freq, it->second);
   }
   return n-max_freq;
}

int main(){
    int arr[] = { 4, 3, 4, 4, 2, 4  };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<minDelete(arr,n);



    return 0;
}
