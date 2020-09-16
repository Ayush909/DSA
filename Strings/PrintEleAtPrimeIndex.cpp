// Print elements at prime index in the given string

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

void prime_index(string str){
    int n = str.length();
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<str[i-1]<<" ";
        }
    }
}

int main()
{
    string input = "GeeksforGeeks";
    prime_index(input);
    return 0;
}
