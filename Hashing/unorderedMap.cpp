#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["ide"] = 10;


    /*if(m.find("gfg") != m.end()){
        cout<<"found "<<endl;
    }else{
        cout<<"Not found\n";
    }*/

    auto it = m.find("gfg");
    if(it != m.end()){
        cout<<it->second<<endl;
    }

    if(m.count("ide")>0){
        cout<<"Found using count"<<endl;
    }else{
         cout<<"Not Found using count"<<endl;
    }

    /*for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }*/

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}