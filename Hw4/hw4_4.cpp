#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int main(){
    
    double d1=2.7,d2=3.1;
    double *p=&d1;
    
    p=&d2;
    *p=5.5;
    
    cout<<<<endl;
  
    system("pause");
    return 0;
    }

