//using DP
// Time : O(N)
// Space : O(N)

#include <iostream>
using namespace std;
#define MAX 100
#define NIL -1

int memo[MAX];

void init(){
    for(int i=0; i<MAX; i++){
        memo[i] = -1;
    }
}

int fibo(int n){

    if( memo[n] == -1 ){
     int res;
     
        if(n == 0 || n == 1){
            res = n;
        }else{
            res = fibo(n-1) + fibo(n-2);
        }

     memo[n] = res;

    }

    return memo[n];
}

int main(){
    init();

    int n = 7;
    cout<<fibo(n);

    return 0;
}
