//Given a sorted array and a sum, check if there is a triplet whose sum = given sum
// fix the first element and find the pair in the remaining array whose sum = given value
// if found, return true, else move to fix second element and so on...


#include <iostream>
using namespace std;

bool isTriplet(int* arr,int left,int right,int sum){

   while(left != right){
    if((arr[left] + arr[right]) > sum){
        right--;
    }else if((arr[left] + arr[right] )< sum){
        left++;
    }else{
        return true;
    }
   }
   return false;
}

bool check(int *arr,int n,int value){
  for(int i=0;i<n-2;i++){

    if( isTriplet(arr,i+1,n-1,value - arr[i]) ){
        return true;
    }

  }
  return false;
}

int main(){
    int n = 7;
    int arr[n] = {3,5,9,10,12,14,15};

   cout<<check(arr,n,30);

   return 0;
}
