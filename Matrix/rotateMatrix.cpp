//Method 1: Make a temp matrix and make first row = temp[first col] and so on..
// Time: O(N2) & Space: O(N2)
#include <iostream>
using namespace std;
const int r = 4;
const int c = 4;

void rotatematrix(int arr[r][c]){
    int temp[r][c];

    for(int i=0;i<r;i++){
        for(int j = 0; j<c; j++){

            temp[c-1-j][i] = arr[i][j];

        }
    }
    for(int i=0;i<r;i++){
        for(int j=0; j<c; j++){
            arr[i][j] = temp[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[r][c] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotatematrix(arr);

    return 0;
}


//Method:2 first do the transpose and then reverse each column;
O(N2) & space complexity : O(1)
void rotatematrix(int arr[r][c]){
    //Transpose
    for(int i=0;i<r;i++){
        for(int j = i+1; j<c; j++){
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    //Reverse each column
    for(int i=0; i<r; i++){
        int low = 0,high = c-1;
        while(low < high){
            int temp = arr[low][i];
            arr[low][i] = arr[high][i];
            arr[high][i] = temp;
            low++;
            high--;
        }
    }
    //Print the matrix
    for(int i=0;i<r;i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[r][c] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotatematrix(arr);

    return 0;
}
