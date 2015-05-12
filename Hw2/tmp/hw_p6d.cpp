#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<iostream>

using namespace std;

int main(){

    int n1=1, n2=1, tmp, i=1;
    while(i<26){
        
        cout<<n1<<",";
        
        tmp=n1+n2;
        n1=n2;
        n2=tmp;
        
        i++;
        }
    
    
    system("pause");
    return 0;
    
    }
