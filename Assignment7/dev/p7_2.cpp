#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

void prompt(int&, int&, int&);

int main(){
    int a=0 ,b=0 ,c=0;
    cout<<a<<b<<c<<endl;
    cout<<"This program factors polynomials of the form: ax^2+bx+c \n";

     prompt(a,b,c);
   cout<<a<<b<<c<<endl;
 
    system("pause");
    return 0;            
    }

void prompt(int& a,int& b,int& c){
    
    cout<<"Enter a value for a: ";
    cin>>a;
    cout<<"Enter a value for b: ";
    cin>>b;
    cout<<"Enter a value for c: ";
    cin>>c;
    
    return;
    }
