#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    
    int b[3]={1,2,3};
    int* a;
    int* c;
    c=b;
    a=new int[3];
    a=c;
    
    delete[] c;
    cout<<a[2];
    system("pause");
    return 0;
    }
