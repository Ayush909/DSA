// find the sum of elements at prime indices

#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n <=1 ){
        return false;
    }

    for(int i=2; i<n; i++){
        if(n % i ==0){
            return false;
        }
    }

    return true;

}

void prime_index(int arr[], int n){
    int sum = 0;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            sum += arr[i-1];
        }
    }
    cout<<sum;
}

int main()
{
    int arr[] = {2,5,7,12,13,15,19};
    int n = sizeof(arr) / sizeof(arr[0]);


    prime_index(arr,n);
    return 0;
}
