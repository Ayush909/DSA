//Check whether the vowels in a string are in alphabetical order or not
#include <iostream>
using namespace std;

bool areVowelsInOrder(string s){
    int n = s.length();
    
    // ASCII Value 64 is less than 
    // all the alphabets 
    // so using it as a default value 
    char c = (char)64;
    for(int i=0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            if(s[i] < c){
                return false;
            }else{
                c = s[i];
            }
        }
    }
    return true;

}

int main()
{
    string s = "aabbbiddeecc";

    if (areVowelsInOrder(s))
    cout << "Yes";
    else
    cout << "No";

    return 0;
}
