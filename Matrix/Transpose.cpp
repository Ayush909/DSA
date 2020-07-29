#include <iostream>
using namespace std;
const int r = 4;
const int c = 4;

void snake(int arr[r][c]){
    int temp[r][c];
    for(int i=0; i<r; i++){
        for(int j=i+1; j<c; j++){
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[r][c] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    snake(arr);

    return 0;
}
