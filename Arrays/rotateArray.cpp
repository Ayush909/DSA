// Method 1: Brute Force
// #include <iostream>    // to read and write data
// #include <cstdlib>
// #include <string>
// #include <limits> //to show min max of data types
// #include <vector>
// #include <sstream>
// #include <numeric>
// #include <ctime>
// #include <cmath>

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


// Method 2 : Rotate one by one


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

// Method 3 : Juggling algorithm : divide the array into set(no of sets = gcd of n,k) and shift in those array one by one
// this algorithm will make space complexity = O(1)
// Time complexity :  O(n)



using namespace std;

//greatest common divisor function(uses recursion)
int gcd(int a,int b){
    if(b == 0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

int main()
{
  int d,n = 9;
  int arr[n] = {1,2,3,4,5,6,7,8,9};

  int k =3;
  int temp;

  int no_of_sets = gcd(n,k);

  for(int i =0 ; i< no_of_sets ; i++){
        temp = arr[i];
    for(int j = i ; j < n ; j =(j+k)% n){

         d = (j+k)% n;
         //check for the last element in the cycle. if yes then arr[j] == temp;
         if(d == i){
            arr[j] = temp;
            break;
        }
        //left shifting here
        arr[j] = arr[d];
    }
  }
  //print arr
  for(int i =0 ; i<n ;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}



//Method 4 :  Reversal method

using namespace std;

void rvrArray(int arr[], int start,int end,int d){
    if(d == 0) return;


    while(start<end){
        int temp = arr[start];
         arr[start] = arr[end];
         arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
  int n = 7,d=2;
  int arr[n] = {1, 2, 3, 4, 5, 6, 7};

  d = d % n;

  rvrArray(arr,0,d-1,d);
  rvrArray(arr,d,n-1,d);
  rvrArray(arr,0,n-1,d);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }



  return 0;
}















