//Question: Find the number of pairs of the prime numbers with sum 6 in range (4,30)

#include <bits/stdc++.h>
using namespace std;

int count_prime_pairs(int l,int r){
    int count=0;
    bool prime[r+1];
    memset(prime,true,sizeof(prime));

    for(int i=2; i*i<=r; i++){
        if(prime[i] == true){
            for(int j=i*i; j<=r; j += i){
                prime[j] = false;
            }
        }
    }

    for(int i=l; i<=r-6; i++){
        if(prime[i] && prime[i+6]){
            count++;
        }
    }

    if(count>0){
        cout<<count;
    }else{
        cout<<"No pair found";
    }

}

int main()
{
    int n,m;
    cout<<"Enter range: ";
    cin>>n>>m;
    count_prime_pairs(n,m);

    return 0;
}
