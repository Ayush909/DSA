// see also twisted tower of hanoi..its easy and slightly different

#include <iostream>
using namespace std;

void TOH(int n,char src, char aux, char dest){
 if(n==1){
    cout<<"Move 1 from "<<src<<" to "<<dest<<endl;
    return;
 }
 TOH(n-1,src,dest,aux);
 printf("Move %d from %c to %c\n",n,src,dest);
 TOH(n-1,aux,src,dest);
}


int main(){
    TOH(3,'A','B','C');
    return 0;
}
