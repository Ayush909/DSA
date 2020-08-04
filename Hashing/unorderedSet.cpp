#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(20);
    s.insert(10);
    s.insert(15);
    s.insert(5);
    s.insert(35);

    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;
    cout<<s.size()<<endl;

    if(s.find(15) == s.end()){
        cout<<"Not found";
    }else{
        cout<<"Found: "<<*s.find(15)<<endl;
    }

    auto it = s.find(5);
    s.erase(it);

    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;
    cout<<s.size()<<endl;


    return 0;
}