//Given a sorted array and a sum, check if there is a pair whose sum = given sum
// Two pointer approach: left = 0, right = n-1, if arr[left] + arr[right] == sum, return true
// if arr[left] + arr[right] > sum, right--
// if arr[left] + arr[right] < sum, left--
// run everything till left != right

//*NOTE* :  this is for sorted array, we could have solved this using hashing,
// but hashing space complexity = O(N)

//*NOTE* : if this was unsorted array, solve using hashing

#include <iostream>
using namespace std;

bool isPair(int *arr,int n,int value){
   int left = 0,right = n-1;

   while(left != right){
    if((arr[left] + arr[right]) > value){
        right--;
    }else if((arr[left] + arr[right] )< value){
        left++;
    }else{
        return true;
    }
   }
   return false;
}

int main(){
    int n = 7;
    int arr[n] = {3,5,9,10,12,14,15};

    cout<<isPair (arr,n,23);

   return 0;
}
