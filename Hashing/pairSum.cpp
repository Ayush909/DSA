#include <iostream>
#include <unordered_set>
using namespace std;

void printPairs(int arr[],int n, int sum){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        if(s.count(sum - arr[i])){
            cout<<arr[i]<<" "<<sum- arr[i];
            return;
        }else{
            s.insert(arr[i]);
        }
    }
    cout<<"Not found any pair";
    return;
}

int main(){
    int arr[] = { 1, -5, 45, 6, 10, 8 };
    int sum = 40;
    int n = sizeof(arr) / sizeof(arr[0]);

    printPairs(arr,n,sum);



    return 0;
}
