#include <iostream>
#include <unordered_map>
using namespace std;

void printfreq(int arr[],int n){
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main()
{
   int arr[] = {10,12,12,10,14,10};
   printfreq(arr,6);

    return 0;
}