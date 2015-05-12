#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<vector>

using namespace std;


int main(){
    
    int a[]={2,3,5,7,11,13};
    int *p;
    p=&a[1];
    p++;
    cout<<*p<<endl;

    system("pause");
    return 0;
    }

