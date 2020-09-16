// Recursion method
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int knapsack(int wt[], int val[], int W, int n){
    if( n == 0 || W == 0){
        return 0;
    }
    if( wt[n-1] <= W ){
        return max( val[n-1] + knapsack(wt,val,W - wt[n-1] , n-1), knapsack(wt,val,W,n-1) );
    }else if( wt[n-1] > W){
        return knapsack(wt,val,W,n-1);
    }
}


int main(){
    int wt[] = {10,20,30};
    int val[] = {60,100,120};
    int n = sizeof(val) / sizeof(val[0]);
    int W = 50;

    cout<<"Ans is: "<<knapsack(wt,val,W,n);

    return 0;
}

//DP method (using memoization)
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int dp[102][1002];

void init(){
    for(int i=0; i<102; i++){
        for(int j=0; j<1002; j++){
            dp[i][j] = -1;
        }
    }
}

int knapsack(int wt[], int val[], int W, int n){
    if( n == 0 || W == 0){
        return 0;
    }

    if(dp[n][W] != -1){
        return dp[n][W];
    }

    if( wt[n-1] <= W ){
        return dp[n][W] =  max( val[n-1] + knapsack(wt,val,W - wt[n-1] , n-1), knapsack(wt,val,W,n-1) );
    }else if( wt[n-1] > W){
        return dp[n][W] = knapsack(wt,val,W,n-1);
    }
}


int main(){
    int wt[] = {10,20,30};
    int val[] = {60,100,120};
    int n = sizeof(val) / sizeof(val[0]);
    int W = 50;

    //initialize the array first
    init();

    cout<<"Ans is: "<<knapsack(wt,val,W,n);

    return 0;
}

