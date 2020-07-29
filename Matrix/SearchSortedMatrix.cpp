// Search the given element in a matrix that is row wise and column wise sorted
#include <iostream>
using namespace std;
const int r = 4;
const int c = 4;

void sortedMatrixSearch(int arr[r][c],int value){
    int i =0, j = c-1;
    while( i<r && j >=0){
        if(arr[i][j] == value){
            printf("Found at %d %d",i,j);
            return;
        }else if( arr[i][j] > value){
            j--;
        }else{
            i++;
        }
    }
    printf("Not found");
}

int main(){
    int arr[r][c] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    sortedMatrixSearch(arr,13);

    return 0;
}
