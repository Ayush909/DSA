#include <iostream>
#include <cctype>
using namespace std;
int main(){

   string str = "admeDCEAB";
   bool lc[26] = {0};
   bool uc[26] = {0};
   for(int i = 0; i< str.length(); i++){

        if(islower(str[i])){

            lc[(int)str[i] - 97] = true;

        }else{

            uc[(int)str[i] - 65] = true;

        }
   }
   for(int i=25; i>=0; i--){

        if(lc[i] == true && uc[i]== true){
            cout<< (char)(i + 65);
            break;
        }
   }

    return 0;

}
