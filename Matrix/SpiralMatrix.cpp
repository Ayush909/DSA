// Print the given matrix in spiral form
#include <iostream>
using namespace std;
const int r = 4;
const int c = 4;

void spiralMatrix(int arr[r][c]){
    int top = 0,bottom = r-1, left = 0, right = c-1;
    while(top <= bottom && left <= right){
        //Print top row from left to right
        for(int i=left; i<= right; i++){
            cout<<arr[top][i]<<" ";
        }
        top++;

        //Print right column from top to bottom
        for(int i=top; i<= bottom; i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        //Print bottom row from right to left
        if(top <= bottom){
            for(int i=right; i>=left; i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }


        //Print left column from bottom to top
        if(left<= right){
            for(int i=bottom; i>= top; i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }

    }
}

int main(){
    int arr[r][c] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralMatrix(arr);

    return 0;
}
