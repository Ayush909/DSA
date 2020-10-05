#include <bits/stdc++.h>
using namespace std;
//*.*#***#***#.*.*.*#*.*#.*.#******#***#***#*.*
//.*.##******##**.*.*##***
int main(){

    int n;
    cin>>n;
    char arr[3][n];

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    string res;

    for(int j=0; j<n;){

        if(arr[0][j] == '#'&& arr[0][j+1] != '#'){
            res += '#';
            j++;
            continue;

        }else if(arr[0][j] == '#' && arr[0][j+1]== '#'){
            j++;
            continue;
        }else if(arr[0][j] == '.' && arr[0][j+2] == '.' && arr[2][j+1] == '.'){
            res+="A";

        }
        else if(arr[1][j+2] == '.' && arr[1][j] == '*' && arr[1][j+1] == '*'){
            res += "E";
        }else if(arr[1][j] == '.' && arr[1][j+2] == '.'){
            res += "I";
        }
        else if(arr[0][j+1] == '.' && arr[1][j+1] == '.'){
            res += "U";
        }else if(arr[1][j+1] == '.'){
            res += "O";
        }

        j += 3;

    }

    cout<<res;



	return 0;
}
