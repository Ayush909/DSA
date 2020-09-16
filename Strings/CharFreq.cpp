//Print characters and their frequencies in order of occurrence
#include <iostream>
#include <unordered_map>
using namespace std;

void printCharWithFreq(string str){
    int n = str.length();
    int freq[26] = {0};

    for(int i=0; i<n; i++){
        freq[str[i] - 'a']++;
    }

    for(int i=0; i<n; i++){
        if(freq[str[i] - 'a'] != 0){
            cout<<str[i]<<" "<<freq[str[i] - 'a']<<endl;
            freq[str[i] - 'a'] = 0;
        }

    }

}

int main()
{
    string str = "geeksforgeeks";
    printCharWithFreq(str);
    return 0;
}
