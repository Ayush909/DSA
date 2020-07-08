Method 1: Brute Force
#include <iostream>    // to read and write data
#include <cstdlib>
#include <string>
#include <limits> //to show min max of data types
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
  int n = 8;
  int arr[n] = {5,6,7,8,1,2,4,9};
  int d =3;
  int temp[d];

  for(int i=0;i<d;i++){
    temp[i] = arr[i];
  }
  for(int i=0;i<n-d;i++){
    arr[i] = arr[i+d];
  }

  int count = d-1;
  for(int i=n-1 ; i > n-1-d ;i--){
    if(count>=0){
       arr[i] = temp[count];
       count--;
    }else{
        break;
    }

  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}


