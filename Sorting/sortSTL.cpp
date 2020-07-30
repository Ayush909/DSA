//sort() - O(nlogn)
 
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int arr[] = {10,3,14,23,15,22,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    //sort(arr,arr+n); // ascending order

    sort(arr,arr+n,greater<int>()); //descending order

    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

//Method 2: We can make our own function to decide the type of sorting
#include <iostream>
#include <algorithm>
using namespace std;

struct Point{
    int x,y;
};

bool mycomp(Point p1, Point p2){
    return (p1.y < p2.y); //ascending order in terms of 'y'
}

int main(){

    Point arr[] = {{3,10}, {2,8} ,{5,4}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n,mycomp);

    for(auto i: arr){
        cout<<i.x<<" "<<i.y<<endl;
    }

    return 0;
}
