#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

void function3(int,int,double&,int&);

int main(){
    
    double average;
    int product;
    
    function3(6,3,average,product);

    cout<<average<<endl;
    cout<<product<<endl;
    
    system("pause");
    return 0;
    }

void function3(int a, int b, double& average, int& product){
     
     average=(a+b)/2.0;
     product=a*b;
     
     }
