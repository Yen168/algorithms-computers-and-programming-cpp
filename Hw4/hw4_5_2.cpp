#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;


int main(){
    
  int a=1,b=2;
  
  int *p1=&a;
  int *p2=&b;
  int *p3;
   
   cout<<"addof a: "<<&a<<" addof b: "<<&b<<endl;
   

   
   p3=p1;
   cout<<"*p3="<<*p3<<", p3="<<p3<<endl;
   
   *p1= *p2;
   cout<<"*p1="<<*p1<<", p1="<<p1<<endl; 
   
    system("pause");
    return 0;
    }

