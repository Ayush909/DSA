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


Method 2 : Rotate one by one

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
  int n = 7;
  int arr[n] = {1,2,3,4,5,6,7};

  int d =2;
  int temp;

  //main steps here set temp = first element of array and shift all the ele one by one to left.
  // at last add arr[n-1] = temp;
  for(int i = 0 ;i < d ; i++){ // this loop is to run the loop to rotate arr by 2 steps
        temp = arr[0];
    for(int j =0;j<n;j++){
        arr[j] = arr[j+1];
    }
        arr[n-1] = temp;
  }

  //prints the result
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}












