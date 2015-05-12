#include<iostream>
#include<cstdlib>
using namespace std;
bool in(int);

int main(){
    
    if(in(7)) cout<<"True";
    else cout<<"False";
    system("pause");
    return 0;
    }
    
bool in(int k){
    
    if(k>0)return true;
    
    k*-1;
    
    cout<<"k";
    }
