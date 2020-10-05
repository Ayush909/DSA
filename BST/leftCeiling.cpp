//Using Set(self balancing tree)
//O(nlogn)
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {2,8,30,15,25,12};
   int n = sizeof(arr) / sizeof(arr[0]);

   set<int> s;
   s.insert(arr[0]);
   cout<<"-1"<<" ";
   
   for(int i=1; i<n; i++){
        auto it = s.lower_bound(arr[i]);
        if(it != s.end()){
            cout<<*it<<" ";
        }else{
            cout<<"-1"<<" ";
        }
    s.insert(arr[i]);
   }
   return 0;
}

//Naive
//O(n^2)
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {2,8,30,15,25,12};
   int n = sizeof(arr) / sizeof(arr[0]);

   cout<<"-1"<<" ";

   for(int i=1; i<n; i++){
        int diff = INT_MAX;
    for(int j=0; j<i; j++){
        if(arr[j]>=arr[i]){
            diff = min(diff,arr[j]-arr[i]);
        }
    }
    if(diff == INT_MAX){
        cout<<"-1"<<" ";
    }else{
        cout<<arr[i] + diff<<" ";
    }
   }
}
